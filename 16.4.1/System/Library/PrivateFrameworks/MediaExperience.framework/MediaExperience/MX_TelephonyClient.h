@class CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface MX_TelephonyClient : NSObject {
    CoreTelephonyClient *mClient;
    NSObject<OS_dispatch_queue> *mAccessQueue;
}

- (void)dealloc;
- (id)init;
- (id)copyCountryNameFromOperatorCountryBundle;
- (id)copyIsoCountryCodeForMCC;
- (BOOL)getIsInHomeCountry;

@end
