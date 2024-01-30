@class NSArray, NSString, NSURL, RCDebugOverrides, RCDeviceInfo;

@interface RCConfigurationSettings : NSObject <RCSerializable>

@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly, nonatomic) NSArray *requestInfos;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) RCDeviceInfo *deviceInfo;
@property (readonly, nonatomic) RCDebugOverrides *debugOverrides;
@property (readonly, copy, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) BOOL useBackgroundRefreshRate;
@property (readonly, nonatomic) unsigned long long requestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 useBackgroundRefreshRate:(BOOL)a8;
- (BOOL)isValid;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)JSONRepresentation;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7 requestMode:(unsigned long long)a8;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 userID:(id)a3 storefrontID:(id)a4 bundleID:(id)a5 deviceInfo:(id)a6 debugOverrides:(id)a7;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5 useBackgroundRefreshRate:(BOOL)a6 requestMode:(unsigned long long)a7;
- (id)initWithRequestInfos:(id)a0 userID:(id)a1 storefrontID:(id)a2 bundleID:(id)a3 deviceInfo:(id)a4 debugOverrides:(id)a5;

@end
