@class UIView;

@interface GKAlertView : UIAlertView {
    UIView *_clipView;
    UIView *_contentView;
}

+ (void)initialize;
+ (struct CGSize { double x0; double x1; })preferredContentViewSize;

- (id)initWithTitle:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3 otherButtonTitles:(id)a4;
- (BOOL)_canDrawContent;
- (void)dealloc;
- (id)contentView;
- (id)initAlertView;
- (void)layoutAnimated:(BOOL)a0;
- (void)_replaceContentView:(id)a0 animated:(BOOL)a1;
- (void)layoutAnimated:(BOOL)a0 withDuration:(double)a1;
- (void)setContentView:(id)a0 animated:(BOOL)a1;

@end
