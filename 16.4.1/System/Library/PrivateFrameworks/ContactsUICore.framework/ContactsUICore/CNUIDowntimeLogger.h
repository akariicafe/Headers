@class NSObject;
@protocol OS_os_log;

@interface CNUIDowntimeLogger : NSObject

@property (class, readonly, nonatomic) CNUIDowntimeLogger *sharedLogger;

@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (id)initWithLog:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)logSuccessUpdatingContactListByRemovingContacts:(id)a0 ofFamilyMember:(id)a1;
- (void)logFailure:(id)a0 fetchingContactsOfFamilyMember:(id)a1;
- (void)logFailure:(id)a0 updatingContactListByAddingContacts:(id)a1 ofFamilyMember:(id)a2;
- (void)logFailure:(id)a0 updatingContactListByRemovingContacts:(id)a1 ofFamilyMember:(id)a2;
- (void)logFailure:(id)a0 updatingContactWhitelistByAddingContacts:(id)a1 ofFamilyMember:(id)a2;
- (void)logFailure:(id)a0 updatingContactWhitelistByRemovingContacts:(id)a1 ofFamilyMember:(id)a2;
- (void)logFetchingFamilyCircleError:(id)a0;
- (void)logFetchingMeError:(id)a0;
- (void)logResultOfFetchingContacts:(id)a0 ofFamilyMember:(id)a1;
- (void)logSuccessFetchingContacts:(id)a0 ofFamilyMember:(id)a1;
- (void)logSuccessUpdatingContactListByAddingContacts:(id)a0 ofFamilyMember:(id)a1;
- (void)logSuccessUpdatingContactWhitelistByAddingContacts:(id)a0 ofFamilyMember:(id)a1;
- (void)logSuccessUpdatingContactWhitelistByRemovingContacts:(id)a0 ofFamilyMember:(id)a1;

@end
