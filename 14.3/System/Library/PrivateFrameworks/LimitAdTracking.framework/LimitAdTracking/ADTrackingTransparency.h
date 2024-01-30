@interface ADTrackingTransparency : NSObject

@property (readonly, nonatomic) BOOL crossAppTrackingAllowedSwitchEnabled;
@property (nonatomic) BOOL crossAppTrackingAllowed;
@property (readonly, nonatomic) BOOL personalizedAdsSwitchEnabled;
@property (nonatomic) BOOL personalizedAds;

- (BOOL)_userAllowedToChangeSettings;
- (id)personalizedXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (id)personalizedAdsProxy:(id)a0;

@end
