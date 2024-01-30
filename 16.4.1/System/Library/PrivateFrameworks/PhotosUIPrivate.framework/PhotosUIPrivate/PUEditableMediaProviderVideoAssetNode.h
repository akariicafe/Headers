@class AVAsset, NSArray, NSString, PUEditableMediaProvider;
@protocol PXRunNodeDelegate, PUEditableAsset;

@interface PUEditableMediaProviderVideoAssetNode : PXRunNode <PUVideoAssetNode> {
    int _requestID;
}

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly) unsigned long long state;
@property (readonly, getter=isWaiting) BOOL waiting;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void).cxx_destruct;
- (void)_handleDidLoadVideo:(id)a0 info:(id)a1;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 version:(long long)a2;

@end
