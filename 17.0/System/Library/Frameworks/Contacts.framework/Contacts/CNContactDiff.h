@class NSArray;

@interface CNContactDiff : NSObject

@property (readonly, copy) NSArray *updates;

+ (id)diffContact:(id)a0 to:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (id)contactByApplyingUpdatesToContact:(id)a0;
- (BOOL)applyToABPerson:(void *)a0 isUnified:(BOOL)a1 logger:(id)a2 error:(id *)a3;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToMutableContacts:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithUpdates:(id)a0;

@end
