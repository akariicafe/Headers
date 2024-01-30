@class AVAssetReader, HMICameraVideoFragment, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMICameraVideoAssetReader : HMFObject <HMFLogging, AVAssetResourceLoaderDelegate>

@property unsigned long long currentFrameId;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (readonly) NSObject<OS_dispatch_queue> *resourceLoaderWorkQueue;
@property (readonly) HMICameraVideoFragment *videoFragment;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)assetKeys;
+ (id)readerForVideoFragment:(id)a0 workQueue:(id)a1 logIdentifier:(id)a2;
+ (id)trackKeys;

- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (void)startReading:(id /* block */)a0;
- (BOOL)readNextFrame:(id *)a0 error:(id *)a1;
- (id)initWithVideoFragment:(id)a0 workQueue:(id)a1 logIdentifier:(id)a2;
- (void)_propertiesLoadedForAsset:(id)a0 resultCallback:(id /* block */)a1;
- (id)_didKeyValueLoadFailed:(long long)a0;
- (void)_propertiesLoadedForTrack:(id)a0 fromAsset:(id)a1 resultCallback:(id /* block */)a2;
- (BOOL)_validateSequentialIntegrityOfFragmentsInAsset:(id)a0;
- (unsigned long long)_sequenceNumberOfLastFragmentInAsset:(id)a0;
- (unsigned long long)_sequenceNumberOfFirstFragmentInAsset:(id)a0;

@end
