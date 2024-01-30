@class NSString, UIButton;

@interface MKUGCCallToActionLikeDislikeAccessoryView : UIView {
    UIButton *_dislikeButton;
    UIButton *_likeButton;
}

@property (copy, nonatomic) NSString *likeImageGlyphName;
@property (copy, nonatomic) NSString *dislikeImageGlyphName;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupButtons;
- (void)setTarget:(id)a0 likeSelector:(SEL)a1 dislikeSelector:(SEL)a2;
- (void)_contentSizeChanged;

@end
