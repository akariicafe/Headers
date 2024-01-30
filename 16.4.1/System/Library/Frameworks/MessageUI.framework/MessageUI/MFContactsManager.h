@class CNContactStore;

@interface MFContactsManager : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;

+ (id)sharedManager;
+ (BOOL)isAuthorizedToUseContacts;

- (id)initWithContactStore:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
