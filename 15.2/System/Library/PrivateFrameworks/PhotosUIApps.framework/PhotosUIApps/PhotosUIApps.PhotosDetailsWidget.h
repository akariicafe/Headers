@class PXPhotosDetailsContext, PXWidgetSpec;
@protocol PXAnonymousView;

@interface PhotosUIApps.PhotosDetailsWidget : NSObject <PXWidget> {
    void /* unknown type, empty encoding */ _context;
    void /* unknown type, empty encoding */ _viewModel;
    void /* unknown type, empty encoding */ _spec;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ widgetDelegate;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (nonatomic, readonly) id<PXAnonymousView> contentView;

- (void).cxx_destruct;
- (id)init;
- (double)preferredContentHeightForWidth:(double)a0;

@end
