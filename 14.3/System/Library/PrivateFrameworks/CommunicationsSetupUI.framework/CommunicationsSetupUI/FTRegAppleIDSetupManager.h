@class IDSAccountController, NSMutableDictionary, NSArray, NSString;

@interface FTRegAppleIDSetupManager : NSObject

@property (retain, nonatomic) IDSAccountController *iMessageAccountController;
@property (retain, nonatomic) IDSAccountController *faceTimeAccountController;
@property (retain, nonatomic) NSMutableDictionary *setupOperations;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSArray *candidateAliases;
@property (copy, nonatomic) NSString *selectionSummaryText;
@property (readonly, nonatomic) BOOL shouldShowAliasSelectionUI;
@property (copy, nonatomic) NSArray *selectedAliases;

+ (id)sharedInstance;

- (id)_appleID;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)addSetupDictionary:(id)a0 forService:(long long)a1;
- (void)_notifySuccess:(BOOL)a0 error:(id)a1;
- (id)accountControllerForService:(id)a0;
- (void)_updateCandidateAliases;
- (BOOL)_shouldAttemptAccountRegistration;
- (BOOL)showsPhoneNumberDisplayString;
- (BOOL)_shouldShowAliasSelectionUI;
- (id)phoneNumberDisplayString;
- (void)_updateSelectionSummaryText;
- (void)_notifySuccess;
- (void)_notifyFailureWithError:(id)a0;
- (id)_aliasesForDictionary:(id)a0;
- (BOOL)shouldShowAliasSelectionUI;
- (BOOL)aliasIsEnabled:(id)a0;
- (BOOL)beginSetupWithCompletionHandler:(id /* block */)a0;

@end
