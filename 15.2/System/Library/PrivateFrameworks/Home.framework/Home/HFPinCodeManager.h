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

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)dealloc;
- (void)_kickoff;
- (void)accessCodeManager:(id)a0 didRemoveHomeAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didUpdateHomeAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didAddHomeAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didRemoveAccessoryAccessCodes:(id)a1;
- (void)accessCodeManager:(id)a0 didAddAccessoryAccessCodes:(id)a1;
- (void)executionEnvironmentRunningStateDidChange:(id)a0;
- (id)removedUserPINCodes;
- (id)currentUserPinCode;
- (id)pinCodeForCodeValue:(id)a0;
- (id)_fetchAccessoryConstraints;
- (id)fetchFromAccessories;
- (void)_addNewHomeAccessCode:(id)a0 toStore:(id)a1;
- (void)_reloadObservers;
- (id)fetchFromAccessoryCache;
- (id)_fetchAccessCodesFromAccessories;
- (id)_buildDataStoreWithAccessoryAccessCodeFetch:(id)a0;
- (id)_fetchCachedAccessoryAccessCodes;
- (id)_submitModificationRequests:(id)a0;
- (id /* block */)_modificationCompletionHandlerForFuture:(id)a0;
- (id)setUserPinCode:(id)a0 forUser:(id)a1;
- (id)_updateGuestPinCodeWithItem:(id)a0 withCodeValue:(id)a1 withUserInfo:(id)a2;
- (void)_fetchPinCodeConstraints:(id /* block */)a0;
- (id)setPinCodeWithItem:(id)a0 enabled:(BOOL)a1 onAccessories:(id)a2;
- (BOOL)isAccessoryFetchInProgress;
- (id)refreshDataStore;
- (id)userPinCodes;
- (id)guestPinCodes;
- (id)addGuestPinCode:(id)a0 withLabel:(id)a1 onAccessories:(id)a2;
- (id)deleteGuestPinCodeWithItem:(id)a0;
- (id)deleteUserPinCodeWithUser:(id)a0;
- (id)updateGuestPinCodeWithItem:(id)a0 withLabel:(id)a1;
- (id)updatePinCodeWithItem:(id)a0 withCodeValue:(id)a1;
- (id)updateGuestPinCodeWithItem:(id)a0 withCodeValue:(id)a1 withLabel:(id)a2;
- (id)enablePinCodesForAllUsersOnNewAccessory:(id)a0;
- (id)enablePinCodesForNewAccessory:(id)a0 forGuestItems:(id)a1;
- (id)generateNewCodeValue;
- (id)checkForValidationErrorsWithPINCodeValue:(id)a0 originalPINCode:(id)a1;
- (id)restoreFullAccessForUserWithItem:(id)a0;
- (id)revokeAccessForAllRemovedUsers;
- (id)hasValidConstraints;
- (void)fetchPinCodeConstraints:(id /* block */)a0;

@end
