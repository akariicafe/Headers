@class NSString, UIButton;

@interface MKUGCCallToActionAddPhotosAccessoryView : UIView {
    UIButton *_addPhotosButton;
}

@property (copy, nonatomic) NSString *glyphName;

- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupButtons;
- (void)_contentSizeChanged;

@end
