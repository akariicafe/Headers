@class NSString, WBSSavedAccount, NSArray, NSMutableArray, WBSTOTPGenerator;

@interface WBSSavedAccountChangeRequest : NSObject

@property (retain, nonatomic) WBSSavedAccount *savedAccount;
@property (copy, nonatomic) NSString *user;
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSMutableArray *sites;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (readonly, nonatomic) NSArray *userVisibleSites;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasUserChange;
@property (readonly, nonatomic) BOOL hasPasswordChange;
@property (readonly, nonatomic) BOOL hasTOTPGeneratorChange;
@property (readonly, nonatomic) BOOL hasNotesEntryChange;
@property (readonly, nonatomic) BOOL isAddingPasswordToAccountWithPasskey;

- (void).cxx_destruct;
- (BOOL)hasSitesChange;

@end
