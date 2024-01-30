@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) NSArray *allowedValues;

- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 allowedValues:(id)a1;

@end
