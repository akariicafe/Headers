@class VUISidebandMediaLibrary, VUIDeviceMediaLibrary;

@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary

@property (readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary;
@property (readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary;

+ (id)keyPathsForValuesAffectingConnectionState;

- (void).cxx_destruct;
- (BOOL)isUpdating;
- (void)dealloc;
- (unsigned long long)connectionState;
- (id)title;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithManager:(id)a0 deviceMediaLibrary:(id)a1 sidebandMediaLibrary:(id)a2;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (BOOL)isInitialUpdateInProgress;
- (void)updateProgressWithCompletionHandler:(id /* block */)a0;
- (void)updateFromCloudWithReason:(long long)a0;
- (void)connectWithCompletionHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (void)_deviceMediaLibraryContentsDidChange:(id)a0;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)a0;

@end
