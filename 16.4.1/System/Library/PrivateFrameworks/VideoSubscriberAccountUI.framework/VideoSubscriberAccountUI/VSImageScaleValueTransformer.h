@interface VSImageScaleValueTransformer : NSValueTransformer

@property (nonatomic) struct CGSize { double width; double height; } preferredSize;

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;

@end
