@class NSSet, SXJSONObject;

@interface SXResolvedObject : NSObject

@property (readonly, nonatomic) SXJSONObject *object;
@property (readonly, copy, nonatomic) NSSet *conditionTypes;

- (void).cxx_destruct;
- (id)initWitObject:(id)a0 conditionTypes:(id)a1;

@end
