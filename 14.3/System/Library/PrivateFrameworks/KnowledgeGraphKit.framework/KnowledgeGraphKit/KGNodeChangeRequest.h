@class NSNumber, NSDictionary;
@protocol KGNode;

@interface KGNodeChangeRequest : NSObject

@property (readonly, nonatomic) id<KGNode> node;
@property (readonly, nonatomic) long long mutationType;
@property (retain, nonatomic) NSNumber *weight;
@property (copy, nonatomic) NSDictionary *properties;

+ (id)changeRequestForNode:(id)a0;
+ (id)removeRequestForNode:(id)a0;

- (void).cxx_destruct;
- (id)initWithMutationType:(long long)a0;

@end
