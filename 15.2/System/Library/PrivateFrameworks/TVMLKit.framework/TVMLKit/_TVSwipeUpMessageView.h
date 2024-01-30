@class UILabel, _TVImageView, NSString;

@interface _TVSwipeUpMessageView : UIView {
    int _swipeUpMessageState;
}

@property (readonly, nonatomic) _TVImageView *chevronView;
@property (readonly, nonatomic) UILabel *messageView;
@property (copy, nonatomic) NSString *message;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_processSwipeUpMessageEvent:(int)a0;

@end
