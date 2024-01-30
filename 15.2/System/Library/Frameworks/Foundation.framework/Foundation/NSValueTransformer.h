@interface NSValueTransformer : NSObject

+ (id)valueTransformerForName:(id)a0;
+ (id)valueTransformerNames;
+ (void)setValueTransformer:(id)a0 forName:(id)a1;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)_initForFoundationOnly;
- (id)reverseTransformedValue:(id)a0;
- (id)init;

@end
