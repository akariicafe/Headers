@class NSNumber, NSDictionary;
@protocol KGNode;

@interface KGNodeChangeRequest : NSObject

@property (readonly, nonatomic) id<KGNode> node;
@property (readonly, nonatomic) NSNumber *weight;
@property (readonly, nonatomic) NSDictionary *properties;

- (void).cxx_destruct;
- (id)initWithNode:(id)a0 weight:(id)a1 properties:(id)a2;

@end
