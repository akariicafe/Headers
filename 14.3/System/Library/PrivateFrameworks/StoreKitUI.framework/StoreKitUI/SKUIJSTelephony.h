@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIJSTelephony : IKJSObject <SKUIJSTelephony> {
    BOOL _isObserving;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    struct __CTServerConnection { } *_telephonyServer;
}

@property (readonly, nonatomic, getter=isCellularRoaming) BOOL cellularRoaming;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) NSString *operatorName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *providerName;

- (void).cxx_destruct;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithAppContext:(id)a0;
- (struct __CTServerConnection { } *)_telephonyServer;
- (id)formattedPhoneNumber:(id)a0;
- (void)sendSMSWithBodyText:(id)a0 :(id)a1 :(id)a2;

@end
