@class NSString, NSTimeZone;

@interface MPCMutablePlaybackDelegationProperties : MPCPlaybackDelegationProperties

@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *deviceGUID;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long systemReleaseType;
@property (copy, nonatomic) NSString *requestUserAgent;
@property (copy, nonatomic) NSTimeZone *timeZone;

- (void)setDeviceName:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setTimeZone:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStoreAccountID:(unsigned long long)a0;
- (void)setDeviceGUID:(id)a0;
- (void)setSystemReleaseType:(long long)a0;
- (void)setRequestUserAgent:(id)a0;

@end
