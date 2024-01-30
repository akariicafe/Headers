@class SXJSONObjectMerger;
@protocol SXConditionValidating;

@interface SXConditionalObjectResolver : NSObject

@property (readonly, nonatomic) id<SXConditionValidating> conditionValidator;
@property (readonly, nonatomic) SXJSONObjectMerger *objectMerger;

- (id)initWithConditionValidator:(id)a0 objectMerger:(id)a1;
- (void).cxx_destruct;
- (id)resolveObjects:(id)a0 context:(id)a1;

@end
