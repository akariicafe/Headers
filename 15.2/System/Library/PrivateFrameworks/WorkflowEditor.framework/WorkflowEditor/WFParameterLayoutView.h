@class UIColor;
@protocol WFParameterLayoutViewDelegate;

@interface WFParameterLayoutView : UIView

@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (weak, nonatomic) id<WFParameterLayoutViewDelegate> delegate;
@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;

- (void)updateBackgroundColor;
- (void)highlight;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)unhighlight;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)accessibilityElements;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)fadeOutHighlight;

@end
