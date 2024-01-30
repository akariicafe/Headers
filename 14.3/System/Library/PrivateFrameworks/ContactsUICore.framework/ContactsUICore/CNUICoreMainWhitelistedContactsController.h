@class NSArray, NSString, CNFuture;
@protocol CNCancelable, CNScheduler, CNUICoreFamilyMemberContactsObserver, CNUICoreContactStoreFacade, CNDowntimeWhitelistContainerFetching, CNSchedulerProvider, CNUICoreFamilyMemberContactsModelFetching;

@interface CNUICoreMainWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource>

@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> mainContactStoreFacade;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> downtimeContainerFetcher;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> backgroundOrImmediateScheduler;
@property (retain, nonatomic) NSArray *familyMemberContactItems;
@property (retain, nonatomic) CNFuture *familyMemberContactItemsFuture;
@property (retain, nonatomic) CNFuture *addContactsToWhitelistFuture;
@property (retain, nonatomic) CNFuture *updateContactsInWhitelistFuture;
@property (retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture;
@property (readonly, nonatomic) id<CNCancelable> contactStoreDidChangeToken;
@property (weak, nonatomic) id<CNUICoreFamilyMemberContactsObserver> observer;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithOptions:(id)a0 schedulerProvider:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contactRepresentingItem:(id)a0;
- (void)updateWhitelistByAddingContacts:(id)a0;
- (void)updateWhitelistByRemovingContacts:(id)a0;
- (void)updateWhitelistByUpdatingContacts:(id)a0;
- (void)finishWhitelistedContactsTasks;
- (void)setupChangeNotificationResponse;
- (void)triggerContactItemsFetch;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (id)initWiththOptions:(id)a0 mainContactStoreFacade:(id)a1 schedulerProvider:(id)a2;
- (id)initWithModelFetcher:(id)a0 mainContactStoreFacade:(id)a1 downtimeContainerFetcher:(id)a2 schedulerProvider:(id)a3;

@end
