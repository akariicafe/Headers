@interface PXOneUpSettings : PXSettings

@property (nonatomic) double maximumWhitespaceWidthForInitialZoomToFill;
@property (nonatomic) BOOL hideFloatingInfoPanel;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (double)zoomFactorForContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldInitiallyZoomContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;

@end
