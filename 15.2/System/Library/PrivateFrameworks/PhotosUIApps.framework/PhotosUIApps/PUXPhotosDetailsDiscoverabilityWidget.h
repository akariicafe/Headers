@class PXPhotosDetailsContext;

@interface PUXPhotosDetailsDiscoverabilityWidget : PhotosUIApps.PhotosDetailsWidget {
    void /* unknown type, empty encoding */ contextObservation;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ widgetInteractionDelegate;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) long long contentLayoutStyle;

- (void).cxx_destruct;
- (id)init;

@end
