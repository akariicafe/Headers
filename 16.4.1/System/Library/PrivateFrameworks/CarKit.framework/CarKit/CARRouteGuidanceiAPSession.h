@class NSString, IAPNavigation, NSMapTable;

@interface CARRouteGuidanceiAPSession : NSObject <IAPNavigationDelegate>

@property (retain, nonatomic) IAPNavigation *iapNavigation;
@property (retain, nonatomic) NSMapTable *navigationAccessories;
@property (retain, nonatomic) NSString *currentNavigationOwnerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedNameForIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)IAPNavigationAccessory:(id)a0 didDisableNavigationUpdatesForComponent:(id)a1;
- (void)IAPNavigationAccessory:(id)a0 didEnableNavigationUpdatesForComponent:(id)a1;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(id)a0;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(id)a0;
- (void)_setupiAPNavigation;
- (void)_updateAccessoryComponentsWithGuidanceInfo:(id)a0;
- (void)updateNavigationGuidanceInfo;

@end
