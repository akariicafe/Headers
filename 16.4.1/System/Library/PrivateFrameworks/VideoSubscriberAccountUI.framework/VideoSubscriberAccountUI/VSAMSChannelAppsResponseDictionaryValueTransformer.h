@interface VSAMSChannelAppsResponseDictionaryValueTransformer : NSValueTransformer

+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)parseAppData:(id)a0;

@end
