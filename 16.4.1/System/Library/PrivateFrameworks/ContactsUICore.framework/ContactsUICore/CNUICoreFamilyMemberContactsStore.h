@class FAFamilyMember;
@protocol CNUICoreContactsSyncTrigger, CNScheduler, CNUICoreContactStoreFacade, CNSchedulerProvider;

@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating>

@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> familyMemberScopedContactStore;
@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) id<CNUICoreContactsSyncTrigger> contactsSyncTrigger;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNScheduler> backgroundOrImmediateScheduler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0 schedulerProvider:(id)a1;
- (id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)a0;
- (id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)a0 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(BOOL)a1;
- (id)initWithFamilyMemberScopedContactStoreFacade:(id)a0 familyMember:(id)a1 contactsSyncTrigger:(id)a2 schedulerProvider:(id)a3;
- (void)triggerContactsSyncRequest;
- (id)updateContactListByAddingContacts:(id)a0;
- (id)updateContactListByRemovingContacts:(id)a0;
- (id)updateContactListByUpdatingContacts:(id)a0;
- (id)updateContactWhitelistByAddingContacts:(id)a0;
- (id)updateContactWhitelistByRemovingContacts:(id)a0;

@end
