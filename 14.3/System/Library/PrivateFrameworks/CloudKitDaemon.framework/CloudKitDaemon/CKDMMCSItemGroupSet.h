@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple;
@property (readonly, nonatomic) NSError *error;

- (void)addItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)allItemGroups;

@end
