@class NSString, NSHashTable, NSObject, CoreTelephonyClient;
@protocol OS_dispatch_queue;

@interface ENCoreTelephonyUtility : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate>

@property (readonly, nonatomic) CoreTelephonyClient *ctClient;
@property (readonly, nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (retain, nonatomic) NSHashTable *observersTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)countryCodeISOForMobileCountryCode:(id)a0;
+ (id)mobileCountryCodeForISO:(id)a0;

- (void)addObserver:(id)a0;
- (id)currentPhoneNumbers;
- (id)countryCodeISOForMobileCountryCode:(id)a0;
- (void)cellMonitorUpdate:(id)a0 info:(id)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)currentMobileCountryCode;
- (void).cxx_destruct;

@end
