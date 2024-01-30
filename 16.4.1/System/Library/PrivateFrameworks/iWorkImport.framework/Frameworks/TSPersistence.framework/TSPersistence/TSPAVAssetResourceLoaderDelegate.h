@class NSString, TSPData, NSObject;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    TSPData *_data;
    long long _dataLength;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_requestHandlingQueue;
    id<TSUReadChannel> _readChannel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisableEntireLengthAvailableOnDemand;

- (id)initWithData:(id)a0;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)delegateQueue;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (void)_provideContentInformationToLoadingRequest:(id)a0;
- (void)_provideDataToLoadingRequest:(id)a0;
- (void)_provideNextDataBlockToLoadingRequest:(id)a0 completion:(id /* block */)a1;

@end
