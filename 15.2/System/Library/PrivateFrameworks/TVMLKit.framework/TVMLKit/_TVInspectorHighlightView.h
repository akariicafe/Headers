@class UIColor, UIWindow, _TVInspectorHighlightMetadataView, UILabel, UIView;

@interface _TVInspectorHighlightView : UIView {
    UIView *_highlightView;
    _TVInspectorHighlightMetadataView *_metadataView;
}

@property (weak, nonatomic) UIWindow *targetWindow;
@property (retain, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) UILabel *descriptionLabel;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)highlightView:(id)a0;

@end
