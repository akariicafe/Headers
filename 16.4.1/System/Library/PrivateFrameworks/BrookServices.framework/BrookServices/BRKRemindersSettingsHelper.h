@class CNContactStore, RTRoutineManager, CLInUseAssertion, CLLocationManager, NSString, BRKSettings;
@protocol BRKRemindersSettingsDelegate;

@interface BRKRemindersSettingsHelper : NSObject <CLLocationManagerDelegate>

@property (weak, nonatomic) id<BRKRemindersSettingsDelegate> delegate;
@property (retain, nonatomic) BRKSettings *brookSettings;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (nonatomic, getter=isCoreRoutineAvailable) BOOL coreRoutineAvailable;
@property (nonatomic, getter=isLocationAvailable) BOOL locationAvailable;
@property (nonatomic, getter=isLocationAuthorizationValid) BOOL locationAuthorizationValid;
@property (nonatomic) long long contactStoreAuthorizationStatus;
@property (readonly, nonatomic, getter=areRemindersAvailable) BOOL remindersAvailable;
@property (readonly, nonatomic, getter=isMeCardAvailable) BOOL meCardAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)update;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (void)_fetchLocationAuthorizationStatus;
- (void)_fetchLocationAvailableStatus;
- (id)_handwashingAppBundleLocationManager;
- (id)_handwashingLocationManager;
- (void)_isCoreRoutineHomeAvailableWithCompletion:(id /* block */)a0;
- (void)_updateWithLocationAuthorizationStatus:(int)a0 manager:(id)a1;
- (id)initWithDelegate:(id)a0 settings:(id)a1;
- (id)meContactWithKeysToFetch:(id)a0;
- (id)remindersFooterTextAndLinkString;
- (void)requestLocationAuthorizationIfNeeded;

@end
