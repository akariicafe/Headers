@class WBSSavedPasswordStore, WBSAutoFillQuirksManager;

@interface WBSSavedPasswordAuditor : NSObject

@property (readonly, nonatomic) WBSSavedPasswordStore *savedPasswordStore;
@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (readonly, nonatomic) BOOL passwordStoreHasDuplicatedPasswords;

- (BOOL)savedPasswordIsReused:(id)a0;
- (id)savedPasswordsWithDuplicatedPassword:(id)a0;
- (id)duplicatePasswordsInPasswords:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_savedPasswordQualifiesForReuseAuditing:(id)a0;
- (BOOL)_passwordIsReused:(id)a0 byOtherSavedPassword:(id)a1;
- (id)initWithSavedPasswordStore:(id)a0 autoFillQuirksManager:(id)a1;

@end
