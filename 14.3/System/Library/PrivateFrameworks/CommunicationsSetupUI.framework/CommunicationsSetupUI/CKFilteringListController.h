@class NSString, PSSpecifier, CKNSExtension, NSArray, NSMutableArray, NSDictionary;

@interface CKFilteringListController : PSListController

@property (nonatomic) BOOL addCheckmark;
@property (retain, nonatomic) id beginMappingID;
@property (retain, nonatomic) CKNSExtension *ckExtension;
@property (retain, nonatomic) NSString *currentExtensionID;
@property (retain, nonatomic) PSSpecifier *selectedSpecifier;
@property (retain, nonatomic) NSMutableArray *specifierListArray;
@property (retain, nonatomic) NSArray *extensionIDArray;
@property (retain, nonatomic) NSDictionary *extensionNameMapping;
@property (nonatomic) BOOL showingParentViewController;
@property (nonatomic) long long spamFilterState;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)applicationDidResume;
- (void)viewWillAppear:(BOOL)a0;
- (void)applicationWillSuspend;
- (void)endMatchingExtensions;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_syncManager;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setIsSpamFilteringDefaultEnabled;
- (void)findSpamExtensions;
- (void)userChangedSpamFilteringSettings;
- (void)enableSpamFiltering:(id)a0;
- (void)disableSpamFiltering;
- (unsigned char)enableSpamForExtensionID:(id)a0 withName:(id)a1;
- (void)shouldShowPrivacyAccessWarning:(id)a0;
- (BOOL)verifyCurrentExtensionIDValidity;
- (id)getDefaultExtension;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)a0;
- (id)getExtensionNameAndWarning:(id)a0;
- (void)tappedSpamAppCell:(id)a0;
- (void)grayOutSMSFilteringIfNecessary:(id)a0;
- (void)tappedNoFilterCell:(id)a0;
- (id)isConversationListFilteringEnabled:(id)a0;
- (void)setConversationListFilteringEnabled:(id)a0 specifier:(id)a1;
- (id)getSpamSpecifiers;
- (id)isSpamFilteringEnabled:(id)a0;
- (void)showPrivacyLegalVC;

@end
