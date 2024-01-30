@interface FMFNoNetworkAlert : NSObject

@property (nonatomic, getter=isGlobalCellularEnabled) BOOL globalCellularEnabled;

+ (BOOL)isAirplaneModeEnabled;
+ (unsigned long long)reasonForNoInternet;
+ (id)alertInfoForInternetUnavailableReason:(unsigned long long)a0;
+ (BOOL)isGlobalCellularEnabled;
+ (id)newAlertController;

@end
