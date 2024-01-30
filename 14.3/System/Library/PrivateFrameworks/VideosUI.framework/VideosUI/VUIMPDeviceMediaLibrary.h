@class NSMutableDictionary, VUIMPMediaLibrary;

@interface VUIMPDeviceMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) VUIMPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) NSMutableDictionary *rentalPlaybackStartDatesToSave;
@property (nonatomic) BOOL updatingRentalPlaybackStartDates;

+ (BOOL)_isUpdateInProgress;
+ (BOOL)_isInitialUpdateInProgress;

- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (void)_handleApplicationDidBecomeActiveNotification:(id)a0;
- (BOOL)isUpdating;
- (void)dealloc;
- (id)title;
- (void)_handleApplicationWillResignActiveNotification:(id)a0;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 manager:(id)a2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (void)_handleMediaLibraryIsUpdateInProgressDidChangeNotification:(id)a0;
- (BOOL)isInitialUpdateInProgress;
- (void)updateProgressWithCompletionHandler:(id /* block */)a0;
- (void)updateFromCloudWithReason:(long long)a0;

@end
