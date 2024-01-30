@class ACAccountType, NSString;

@interface CardDAViCloudDelegateInfoProvider : NSObject <CardDAVDelegateInfoProvider>

@property (retain, nonatomic) ACAccountType *accountsType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateInfoForFamilyMembers:(id)a0;

- (id)cardDAVAccounts;
- (id)familyCircleReturningError:(id *)a0;
- (id)familyMembersPromise;
- (id)appleIDsOfExistingDelegates:(id)a0;
- (id)nonParentsInFamily:(id)a0 error:(id *)a1;
- (id)collectDelegatesForAccount:(id)a0 error:(id *)a1;
- (BOOL)fetchGuardianStatus:(BOOL *)a0 family:(id)a1 account:(id)a2 error:(id *)a3;
- (id)init;
- (void).cxx_destruct;

@end
