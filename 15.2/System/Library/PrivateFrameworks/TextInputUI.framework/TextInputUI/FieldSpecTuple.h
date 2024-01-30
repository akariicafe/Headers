@class NSString, TIAnalyticsFieldSpec;

@interface FieldSpecTuple : NSObject

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) TIAnalyticsFieldSpec *fieldSpec;

+ (id)tupleWithKey:(id)a0 eventSpec:(id)a1;

- (void).cxx_destruct;

@end
