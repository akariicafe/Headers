@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple;
@property (readonly, nonatomic) NSError *error;

- (void)addItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (id)allItemGroups;
- (void).cxx_destruct;

@end
