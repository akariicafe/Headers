@interface PhotosUIPrivate.PUWallpaperPickerSuggestionsView : UIView <PXWallpaperPickerDataSourceChangeObserver> {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ needsRTLInitialOffsetCorrection;
    void /* unknown type, empty encoding */ contentWidthConstraint;
    void /* unknown type, empty encoding */ contentHeightObservation;
    void /* unknown type, empty encoding */ reloadQueue;
}

@property (class, nonatomic, readonly) double verticalMargin;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ preferredViewHeight;
@property (nonatomic, retain) void /* unknown type, empty encoding */ dataSource;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void)wallpaperPickerDataSourceChanged:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
