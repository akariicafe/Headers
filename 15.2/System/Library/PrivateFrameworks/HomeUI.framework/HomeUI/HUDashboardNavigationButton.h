@class UIFont, NSString, UIView, NSNumber, UITapGestureRecognizer;

@interface HUDashboardNavigationButton : UIBarButtonItem <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIView *badgeView;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL hidesWhenCollapsed;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *badgeValue;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMenu:(id)a0;
- (id)initWithImage:(id)a0;
- (void)setAction:(SEL)a0;
- (void)_didTap:(id)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithBarButtonSystemItem:(long long)a0 target:(id)a1 action:(SEL)a2;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (void)_commonInit;
- (void)setTarget:(id)a0;
- (id)initWithBarButtonSystemItem:(long long)a0;

@end
