@class PXPhotosDetailsContext, NSString;

@interface PUXPhotosDetailsSharedLibraryWidget : PhotosUIApps.PhotosDetailsWidget {
    void /* unknown type, empty encoding */ contextObservation;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ widgetInteractionDelegate;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, readonly) NSString *snappableWidgetIdentifier;

- (id)init;
- (void).cxx_destruct;

@end
