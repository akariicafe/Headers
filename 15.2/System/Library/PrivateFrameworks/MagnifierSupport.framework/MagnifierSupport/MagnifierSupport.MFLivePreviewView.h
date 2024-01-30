@class NSString;

@interface MagnifierSupport.MFLivePreviewView : UIView

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)accessibilityPerformEscape;
- (id)initWithCoder:(id)a0;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end
