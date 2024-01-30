@class NSArray;

@interface CNContactDiff : NSObject

@property (readonly, copy) NSArray *updates;

+ (id)diffContact:(id)a0 to:(id)a1 error:(id *)a2;

- (BOOL)applyToABPerson:(void *)a0 logger:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToMutableContacts:(id)a0 withIdentifierMap:(id)a1;
- (id)description;
- (id)initWithUpdates:(id)a0;
- (id)contactByApplyingUpdatesToContact:(id)a0;

@end
