@class NSString;

@interface SBDistanceFieldView : UIView

@property (copy, nonatomic) NSString *renderMode;
@property BOOL invertsShape;
@property struct CGColor { } *foregroundColor;
@property double offset;
@property double sharpness;
@property double lineWidth;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
