@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple;
@property (readonly, nonatomic) NSError *error;

- (id)initWithItems:(id)a0;
- (void)addItem:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (id)allItemGroups;
- (void).cxx_destruct;
- (id)init;

@end
