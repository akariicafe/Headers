@interface PXOneUpSettings : PXSettings

@property (nonatomic) double maximumWhitespaceWidthForInitialZoomToFill;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (BOOL)shouldInitiallyZoomContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;
- (double)zoomFactorForContentWithSize:(struct CGSize { double x0; double x1; })a0 toFillViewWithSize:(struct CGSize { double x0; double x1; })a1;
- (void)setDefaultValues;

@end
