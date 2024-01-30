@class NSString, PHFetchOptions, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver>

@property (readonly, nonatomic) PHPhotoLibrary *syndicationLibrary;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *changeObservationQueue;
@property (readonly, nonatomic) PHFetchOptions *analysisFetchOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)stopListening;
- (void)startListening;
- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)__im_ff_photoAnalysisInSpotlightEnabled;

@end
