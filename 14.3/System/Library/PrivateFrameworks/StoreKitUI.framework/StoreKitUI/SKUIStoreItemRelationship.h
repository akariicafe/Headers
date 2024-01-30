@class SKUIStoreIdentifier, NSSet;

@interface SKUIStoreItemRelationship : NSObject

@property (readonly, copy, nonatomic) SKUIStoreIdentifier *singleParent;
@property (readonly, copy, nonatomic) NSSet *chidItems;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0 andChildren:(id)a1;

@end
