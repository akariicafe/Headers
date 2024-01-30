@class NSMutableDictionary, NSString, NSOperationQueue, HMFUnfairLock;
@protocol HFCameraClipVideoAssetContextProviderDelegate;

@interface HFCameraClipVideoAssetContextProvider : NSObject <HFCameraClipVideoAssetContextProviderDelegate>

@property (class, readonly, nonatomic) HFCameraClipVideoAssetContextProvider *defaultProvider;

@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) NSMutableDictionary *videoContextFuturesByClipID;
@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, weak, nonatomic) id<HFCameraClipVideoAssetContextProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)fetchVideoAssetContextForClip:(id)a0 clipManager:(id)a1;
- (id)cachedVideoAssetContextForClip:(id)a0 clipManager:(id)a1;
- (id)newFetchVideoAssetContextOperationForClip:(id)a0 clipManager:(id)a1;

@end
