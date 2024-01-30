@class NSDictionary, MPCPlayerResponse, NSArray;
@protocol MRUUpNextDataSourceDelegate;

@interface MRUUpNextDataSource : NSObject

@property (retain, nonatomic) NSDictionary *responseItemsByIdentifier;
@property (retain, nonatomic) MPCPlayerResponse *response;
@property (weak, nonatomic) id<MRUUpNextDataSourceDelegate> delegate;
@property (readonly, nonatomic) NSArray *responseItemIDs;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)responseItemForIdentifier:(id)a0;
- (void)playItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)moveReponseItemToNextWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)moveReponseItemWithIdentifier:(id)a0 afterResponseItemWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)canMoveResponseItemWithIdentifier:(id)a0;
- (void)removeResponseItemWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateContentItems;

@end
