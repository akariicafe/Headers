@interface PhotosUIApps.PhotosDetailsWidgetViewModel : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ maxContentSizeCategory;
    void /* unknown type, empty encoding */ asset;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _spec;
    void /* unknown type, empty encoding */ context;
}

- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeWithNotification:(id)a0;

@end
