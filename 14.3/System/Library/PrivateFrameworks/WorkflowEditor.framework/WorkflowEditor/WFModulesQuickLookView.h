@class WFContentCollection, WFNumericPageControl, UIView, QLPreviewController;
@protocol WFModulesQuickLookViewDelegate;

@interface WFModulesQuickLookView : UIView <WFNumericPageControlDelegate>

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) WFNumericPageControl *pageControl;
@property (retain, nonatomic) WFContentCollection *dataSource;
@property (retain, nonatomic) WFContentCollection *content;
@property (weak, nonatomic) id<WFModulesQuickLookViewDelegate> delegate;
@property (readonly, nonatomic) QLPreviewController *previewController;

+ (double)preferredHeightForWidth:(double)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)numericPageControl:(id)a0 changedPageTo:(long long)a1;
- (void)fullscreenPressed;
- (void)sharePressed:(id)a0;

@end
