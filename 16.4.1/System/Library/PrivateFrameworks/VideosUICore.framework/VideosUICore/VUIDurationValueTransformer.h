@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer

@property (retain, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter;
@property (retain, nonatomic) NSDateComponentsFormatter *secondsFormatter;

+ (void)initialize;
+ (Class)transformedValueClass;
+ (BOOL)allowsReverseTransformation;

- (id)transformedValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
