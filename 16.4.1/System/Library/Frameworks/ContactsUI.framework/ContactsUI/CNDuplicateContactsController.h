@class CNContactFormatter, _TtC10ContactsUI18DuplicatesUIHelper, CNContactStore, CNUIContactsEnvironment, NSObject;
@protocol CNDuplicateContactsControllerDelegate, CNContactDataSource;

@interface CNDuplicateContactsController : NSObject <ContactsUI.DuplicatesUIHelperDelegate>

@property (retain, nonatomic) _TtC10ContactsUI18DuplicatesUIHelper *duplicatesUIHelper;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (nonatomic) long long newDuplicatesCount;
@property (nonatomic) long long allDuplicatesCount;
@property (nonatomic) BOOL isAlreadyFindingDuplicates;
@property (nonatomic) BOOL isPerformingMerge;
@property (nonatomic) double mergeCompletedAt;
@property (nonatomic) long long lastIgnoredNewDuplicatesCount;
@property (retain, nonatomic) NSObject<CNContactDataSource> *dataSource;
@property (weak, nonatomic) id<CNDuplicateContactsControllerDelegate> delegate;
@property (readonly, nonatomic) CNContactStore *contactStore;

+ (id)os_log;
+ (id)defaultContactFormatter;
+ (id)defaultContactFormatterForDataSource:(id)a0;

- (BOOL)hasNewDuplicates;
- (void)duplicatesDidChange;
- (void)decorateBannerViewCell:(id)a0;
- (BOOL)isInMergeCooldown:(long long)a0;
- (BOOL)isBusy;
- (void)presentDuplicatesUIFailureAlertForController:(id)a0;
- (void)refreshManagedDuplicatesWithCompletionBlock:(id /* block */)a0;
- (void)presentSheetBasedMergeForController:(id)a0 showsIgnored:(BOOL)a1;
- (void)didSelectUnignoreDuplicate:(id)a0;
- (void)willPerformDuplicatesMerge;
- (void)performIgnoreAll;
- (void)resetDuplicates;
- (void)performMerge:(id)a0;
- (BOOL)wantsToDisplayNewDuplicatesBanner:(long long)a0;
- (void)refreshManagedDuplicates;
- (void)didSelectIgnoreAllDuplicates:(id)a0 signaturesIgnored:(id)a1;
- (void)didPerformDuplicatesMerge;
- (id)initWithDataSource:(id)a0 environment:(id)a1 delegate:(id)a2;
- (BOOL)canMergeDuplicates;
- (void)updateDuplicatesCounts;
- (void)ignoreNewDuplicatesBanner;
- (void)findDuplicates;
- (void)didSelectMergeAllDuplicates:(id)a0 signaturesToMerge:(id)a1;
- (void).cxx_destruct;

@end
