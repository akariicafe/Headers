@class NSDictionary, NSSet, NSIndexSet;

@interface CKTransactionalComponentDataSourceChangeset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *updatedItems;
@property (readonly, copy, nonatomic) NSSet *removedItems;
@property (readonly, copy, nonatomic) NSIndexSet *removedSections;
@property (readonly, copy, nonatomic) NSDictionary *movedItems;
@property (readonly, copy, nonatomic) NSIndexSet *insertedSections;
@property (readonly, copy, nonatomic) NSDictionary *insertedItems;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUpdatedItems:(id)a0 removedItems:(id)a1 removedSections:(id)a2 movedItems:(id)a3 insertedSections:(id)a4 insertedItems:(id)a5;

@end
