@class NSArray, CNFuture, FAFamilyMember, NSString, NSNumber;
@protocol CNCancelable, CNUICoreFamilyMemberContactsUpdating, CNUICoreFamilyMemberContactsObserver, CNSchedulerProvider, CNUICoreFamilyMemberContactsModelFetching;

@interface CNUICoreFamilyMemberContactsController : NSObject <CNUICoreFamilyMemberContactsDataSource>

@property (class, readonly, nonatomic) NSArray *propertyKeysContainingSenstiveData;

@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (retain, nonatomic) NSNumber *countOfFamilyMemberContacts;
@property (retain, nonatomic) CNFuture *countOfFamilyMemberContactsFuture;
@property (retain, nonatomic) CNFuture *updateContactListByAddingContactsFuture;
@property (retain, nonatomic) CNFuture *updateContactListByRemovingContactsFuture;
@property (retain, nonatomic) id<CNCancelable> contactStoreDidChangeToken;
@property (weak, nonatomic) id<CNUICoreFamilyMemberContactsObserver> observer;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactByRemovingSensitiveDataFromContact:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateListByAddingContacts:(id)a0;
- (id)initWithFamilyMember:(id)a0 schedulerProvider:(id)a1;
- (void)setupChangeNotificationResponse;
- (id)initWithFamilyMember:(id)a0 modelFetcher:(id)a1 familyMemberContactsUpdator:(id)a2 schedulerProvider:(id)a3;
- (void)triggerCountOfFamilyMemberContactsFetch;
- (void)cancelCountOfFamilyMemberContactsFetch;
- (id)countOfFamilyMemberContactsFutureFromFetcher;
- (void)updateListByRemovingContacts:(id)a0;

@end
