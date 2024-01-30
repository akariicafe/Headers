@class UIVisualEffectView;

@interface TUIInputAssistantBackdropView : UIView {
    UIVisualEffectView *_contentView;
}

@property double contentCornerRadius;

- (void)_setRenderConfig:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)effectsFor:(id)a0;
- (void)updateVisualStyle:(id)a0;
- (void).cxx_destruct;

@end
