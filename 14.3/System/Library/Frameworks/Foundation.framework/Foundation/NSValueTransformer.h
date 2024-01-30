@interface NSValueTransformer : NSObject

+ (void)setValueTransformer:(id)a0 forName:(id)a1;
+ (id)valueTransformerForName:(id)a0;
+ (id)valueTransformerNames;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)init;
- (id)transformedValue:(id)a0;
- (id)reverseTransformedValue:(id)a0;
- (id)_initForFoundationOnly;

@end
