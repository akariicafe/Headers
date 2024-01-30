@class NSString, NSNumber, NSTimeZone;

@interface SSVMutablePlayActivityEnqueuerProperties : SSVPlayActivityEnqueuerProperties

@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *deviceGUID;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long systemReleaseType;
@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;

- (void)setDeviceName:(id)a0;
- (void)setPrivateListeningEnabled:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setTimeZone:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBuildVersion:(id)a0;
- (void)setStoreAccountID:(unsigned long long)a0;
- (void)setDeviceGUID:(id)a0;
- (void)setSBEnabled:(BOOL)a0;
- (void)setStoreFrontID:(id)a0;
- (void)setSystemReleaseType:(long long)a0;

@end
