@class UIColor, NSRegularExpression;

@interface ICAbstractAttachmentViewController : UIViewController

@property (readonly, nonatomic) BOOL isInResponderChain;
@property (readonly) BOOL forManualRendering;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;

- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)prepareForPrinting;
- (void)zoomFactorOrInsetsDidChange;

@end
