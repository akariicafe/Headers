@class NSDictionary;
@protocol TSCHStyleOwning;

@interface TSCHPropertyMutationTuple : NSObject

@property (readonly) id<TSCHStyleOwning> styleOwner;
@property (readonly) NSDictionary *mutations;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStyleOwner:(id)a0 mutations:(id)a1;
- (id)initWithStyleOwner:(id)a0 mutationMap:(id)a1;
- (id)styleOwnerRef;
- (id)indirectTuple;

@end
