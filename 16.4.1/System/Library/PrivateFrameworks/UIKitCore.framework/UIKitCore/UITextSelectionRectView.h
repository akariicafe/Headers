@class UIColor, CAShapeLayer;

@interface UITextSelectionRectView : UIView

@property (readonly, nonatomic) BOOL hasPath;
@property (readonly, nonatomic) CAShapeLayer *pathLayer;
@property (retain, nonatomic) UIColor *selectionColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;

+ (Class)layerClass;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)path;
- (void)setPath:(id)a0;
- (void).cxx_destruct;

@end
