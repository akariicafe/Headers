@class NSArray;

@interface TIAnalyticsStringFieldSpec : TIAnalyticsFieldSpec

@property (readonly, nonatomic) NSArray *allowedValues;

- (id)initWithName:(id)a0 allowedValues:(id)a1;
- (BOOL)validate:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
