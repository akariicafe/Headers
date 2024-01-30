@class UIView;

@interface CRKKeyline : UIView {
    UIView *_keylineView;
}

@property (readonly) long long type;
@property (readonly) long long direction;
@property (readonly) unsigned long long visualEffectStyle;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 direction:(long long)a1 visualEffectStyle:(unsigned long long)a2;
- (id)_keylineColorForVisualEffectStyle:(unsigned long long)a0;
- (double)_roundedKeylineThickness;
- (double)defaultKeylineInsetForCurrentDevice;

@end
