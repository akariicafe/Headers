@class NSString;

@interface IMUserDefaults : NSObject <IMUserDefaults>

@property (class, nonatomic, getter=isEngramEnabled) BOOL enableEngram;
@property (class, nonatomic, getter=isLiveDeliveryWarmUpEnabled) BOOL enableLiveDeliveryWarmUp;
@property (class, nonatomic) long long phoneNumberValidationMode;
@property (class, readonly, nonatomic) BOOL trustAnyCredential;
@property (class, copy, nonatomic) NSString *phoneNumberValidationPreflightTestData;
@property (class, readonly, nonatomic) BOOL isWritePushPayloadsToDiskEnabled;
@property (class, readonly, nonatomic) NSString *writePushPayloadsToDiskPath;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDefaults;

- (id)appValueForKey:(id)a0;
- (BOOL)appBoolByHostForKey:(id)a0;
- (BOOL)appBoolForKey:(id)a0;
- (id)copyKeyListForAppID:(id)a0;
- (id)copyKeyListForApplicationID:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 hostName:(struct __CFString { } *)a2;
- (id)copyMultipleForCurrentKeys:(id)a0 appID:(id)a1;
- (id)copyMultipleForCurrentKeys:(id)a0 applicationID:(struct __CFString { } *)a1 userName:(struct __CFString { } *)a2 hostName:(struct __CFString { } *)a3;
- (id)copyValueForKey:(id)a0 appID:(id)a1;
- (id)copyValueForKey:(id)a0 applicationID:(struct __CFString { } *)a1 userName:(struct __CFString { } *)a2 hostName:(struct __CFString { } *)a3;
- (void)removeAppValueForKey:(id)a0;
- (void)setAppBool:(BOOL)a0 byHostForKey:(id)a1;
- (void)setAppBool:(BOOL)a0 forKey:(id)a1;
- (void)setAppValue:(id)a0 forKey:(id)a1;
- (void)setMultiple:(id)a0 remove:(id)a1 appID:(id)a2;
- (void)setMultiple:(id)a0 remove:(id)a1 applicationID:(struct __CFString { } *)a2 userName:(struct __CFString { } *)a3 hostName:(struct __CFString { } *)a4;
- (void)setValue:(void *)a0 forKey:(id)a1 appID:(id)a2;
- (void)setValue:(void *)a0 forKey:(id)a1 applicationID:(struct __CFString { } *)a2 userName:(struct __CFString { } *)a3 hostName:(struct __CFString { } *)a4;
- (void)synchronizeAppID:(id)a0;
- (void)synchronizeApplicationID:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 hostName:(struct __CFString { } *)a2;

@end
