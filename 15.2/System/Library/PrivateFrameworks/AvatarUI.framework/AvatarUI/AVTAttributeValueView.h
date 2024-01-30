@class NSUUID, CAShapeLayer, UIImage, UIView, CALayer, NSString;

@interface AVTAttributeValueView : UIView <AVTSectionItemTransitionModel, AVTDiscardableContent>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) CALayer *transitionImageLayer;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) struct CGSize { double width; double height; } imageSizeRatio;
@property (nonatomic) unsigned long long selectionStyle;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (nonatomic) BOOL showPlaceholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ discardableContentHandler;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageSizeRatio:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)toLayer;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateWithImage:(id)a0;
- (id)selectionBezierPath;
- (void)discardContent;
- (void)updateSelectedState:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForTransitionToImage:(id)a0;
- (void)cleanupAfterTransition;
- (void)updateHighlightedState:(BOOL)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)configureImageLayer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shapeLayerRect;
- (id)clippingBezierPath;
- (void)updateSelectionAndMaskLayer;
- (void)relayoutSublayers;
- (void)updateCornerRadii;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectorRect;
- (void)bringSelectionLayersToFront;
- (id)fromLayer;

@end
