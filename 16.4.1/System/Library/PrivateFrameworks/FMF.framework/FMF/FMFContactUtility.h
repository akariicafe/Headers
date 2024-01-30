@class CNContactStore, CNContactFormatter;

@interface FMFContactUtility : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)contactKeys;
- (id)displayNameForContact:(id)a0 andHandle:(id)a1;
- (id)findOptimalContactInContacts:(id)a0;
- (id)getContactForHandle:(id)a0;
- (id)getContactForHandle:(id)a0 keysToFetch:(id)a1;
- (id)shortDisplayNameForContact:(id)a0 andHandle:(id)a1;

@end
