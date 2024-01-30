@class CNContactStore, RTRoutineManager, CLInUseAssertion, CLLocationManager, NSString, BRKSettings;
@protocol BRKRemindersSettingDelegate;

@interface BRKRemindersSettingHelper : NSObject <CLLocationManagerDelegate>

@property (weak, nonatomic) id<BRKRemindersSettingDelegate> delegate;
@property (retain, nonatomic) BRKSettings *brookSettings;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (nonatomic, getter=isCoreRoutineAvailable) BOOL coreRoutineAvailable;
@property (nonatomic, getter=isLocationAvailable) BOOL locationAvailable;
@property (nonatomic, getter=isLocationAuthorizationValid) BOOL locationAuthorizationValid;
@property (readonly, nonatomic, getter=areRemindersAvailable) BOOL remindersAvailable;
@property (readonly, nonatomic, getter=isMeCardAvailable) BOOL meCardAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (id)_handwashingLocationManager;
- (id)meContactWithKeysToFetch:(id)a0;
- (void)_fetchLocationAvailableStatus;
- (void)_fetchLocationAuthorizationStatus;
- (void)_updateWithLocationAuthorizationStatus:(int)a0 manager:(id)a1;
- (void)_isCoreRoutineHomeAvailableWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 settings:(id)a1;
- (void)requestLocationAuthorizationIfNeeded;
- (id)remindersFooterTextAndLinkString;

@end
