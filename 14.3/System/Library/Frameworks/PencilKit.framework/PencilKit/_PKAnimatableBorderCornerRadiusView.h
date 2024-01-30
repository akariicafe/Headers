@class UIColor;

@interface _PKAnimatableBorderCornerRadiusView : UIView

@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
