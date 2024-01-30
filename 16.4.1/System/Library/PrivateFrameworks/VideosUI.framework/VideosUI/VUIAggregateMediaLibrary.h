@class VUISidebandMediaLibrary, VUIDeviceMediaLibrary;

@interface VUIAggregateMediaLibrary : VUIDeviceMediaLibrary

@property (readonly, nonatomic) VUIDeviceMediaLibrary *deviceMediaLibrary;
@property (readonly, nonatomic) VUISidebandMediaLibrary *sidebandMediaLibrary;

+ (id)keyPathsForValuesAffectingConnectionState;

- (BOOL)isUpdating;
- (unsigned long long)connectionState;
- (void)dealloc;
- (id)title;
- (void).cxx_destruct;
- (void)_deviceMediaLibraryContentsDidChange:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoaderIdentifier;
- (void)_sidebandMediaLibraryContentsDidChangeNotification:(id)a0;
- (void)connectWithCompletionHandler:(id /* block */)a0 progressHandler:(id /* block */)a1;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)initWithManager:(id)a0 deviceMediaLibrary:(id)a1 sidebandMediaLibrary:(id)a2;
- (BOOL)isInitialUpdateInProgress;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFromCloudWithReason:(long long)a0;
- (void)updateProgressWithCompletionHandler:(id /* block */)a0;

@end
