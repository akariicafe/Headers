@interface FMFNoNetworkAlert : NSObject

@property (nonatomic, getter=isGlobalCellularEnabled) BOOL globalCellularEnabled;

+ (BOOL)isAirplaneModeEnabled;
+ (BOOL)isGlobalCellularEnabled;
+ (id)alertInfoForInternetUnavailableReason:(unsigned long long)a0;
+ (id)newAlertController;
+ (unsigned long long)reasonForNoInternet;

@end
