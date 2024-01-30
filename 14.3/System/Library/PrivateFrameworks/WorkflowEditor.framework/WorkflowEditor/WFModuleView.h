@class UIColor, NSString, NSProgress, WFAction, UIView;

@interface WFModuleView : UIView <WFActionEventObserver> {
    BOOL _showing;
}

@property (retain, nonatomic) NSProgress *progress;
@property (weak, nonatomic) UIView *progressView;
@property (weak, nonatomic) WFAction *action;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)accessibilityContainerType;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)actionRunningStateDidChange:(id)a0;

@end
