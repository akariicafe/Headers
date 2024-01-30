@class NSArray, REMListChangeItem;

@interface REMListShareeContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (readonly, nonatomic) NSArray *sharees;

- (void).cxx_destruct;
- (void)addSharee:(id)a0;
- (void)removeSharee:(id)a0;
- (id)addShareeWithDisplayName:(id)a0 firstName:(id)a1 lastName:(id)a2 address:(id)a3 status:(long long)a4 accessLevel:(long long)a5;
- (id)initWithListChangeItem:(id)a0;
- (id)addShareeWithDisplayName:(id)a0 firstName:(id)a1 middleName:(id)a2 lastName:(id)a3 namePrefix:(id)a4 nameSuffix:(id)a5 nickname:(id)a6 address:(id)a7 status:(long long)a8 accessLevel:(long long)a9;
- (id)addShareeWithPersonNameComponents:(id)a0 address:(id)a1 status:(long long)a2 accessLevel:(long long)a3;
- (void)removeAllSharees;

@end
