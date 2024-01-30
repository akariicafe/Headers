@class HFPinCodeDataStore, HMAccessCodeManager, NAFuture, NSHashTable, NSArray, NSString, HMHome;

@interface HFPinCodeManager : NSObject <HFHomeObserver, HFExecutionEnvironmentObserver, HMAccessCodeManagerObserver>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMAccessCodeManager *accessCodeManager;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) HFPinCodeDataStore *dataStore;
@property (nonatomic) long long fetchInProgress;
@property (retain, nonatomic) NAFuture *constraintsFuture;
@property (retain, nonatomic) NSArray *constraints;
@property (retain) NAFuture *inProgressFetchFromAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)asciiStringForLocalizedPINString:(id)a0 error:(id *)a1;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)addObserver:(id)a0;
- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)accessCodeManager:(id)a0 didAddAccessoryAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didAddHomeAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didRemoveAccessoryAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didRemoveHomeAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didUpdateHomeAccessCodes:(id)a1;
- (id)initWithHome:(id)a0;
- (id)addGuestPinCode:(id)a0 withLabel:(id)a1 onAccessories:(id)a2;
- (id)checkForValidationErrorsWithPINCodeValue:(id)a0 originalPINCode:(id)a1;
- (id)deleteGuestPinCodeWithItem:(id)a0;
- (id)deleteUserPinCodeWithUser:(id)a0;
- (void)executionEnvironmentRunningStateDidChange:(id)a0;
- (id)fetchFromAccessoryCache;
- (void)fetchPinCodeConstraints:(id /* block */)a0;
- (id)generateNewCodeValue;
- (id)guestPinCodes;
- (id)hasValidConstraints;
- (BOOL)isAccessoryFetchInProgress;
- (id)pinCodeForCodeValue:(id)a0;
- (id)refreshDataStore;
- (id)restoreFullAccessForUserWithItem:(id)a0;
- (id)revokeAccessForAllRemovedUsers;
- (id)setPinCodeWithItem:(id)a0 enabled:(BOOL)a1 onAccessories:(id)a2;
- (id)setUserPinCode:(id)a0 forUser:(id)a1;
- (id)updateGuestPinCodeWithItem:(id)a0 withLabel:(id)a1;
- (id)updatePinCodeWithItem:(id)a0 withCodeValue:(id)a1;
- (id)userPinCodes;
- (void)_addNewHomeAccessCode:(id)a0 toStore:(id)a1;
- (id)_buildDataStoreWithAccessoryAccessCodeFetch:(id)a0;
- (id)_fetchAccessCodesFromAccessories;
- (id)_fetchAccessoryConstraints;
- (id)_fetchCachedAccessoryAccessCodes;
- (void)_fetchPinCodeConstraints:(id /* block */)a0;
- (void)_kickoff;
- (id /* block */)_modificationCompletionHandlerForFuture:(id)a0;
- (void)_reloadObservers;
- (id)_submitModificationRequests:(id)a0;
- (id)_updateGuestPinCodeWithItem:(id)a0 withCodeValue:(id)a1 withUserInfo:(id)a2;
- (id)currentUserPinCode;
- (id)enablePinCodesForAllUsersOnNewAccessory:(id)a0;
- (id)enablePinCodesForNewAccessory:(id)a0 forGuestItems:(id)a1;
- (id)fetchFromAccessories;
- (id)removedUserPINCodes;
- (id)updateGuestPinCodeWithItem:(id)a0 withCodeValue:(id)a1 withLabel:(id)a2;

@end
