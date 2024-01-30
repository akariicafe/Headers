@class NSString, NSDictionary;

@interface SARemotePlaybackDevice : SARemoteDevice <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *airPlayRouteId;
@property (copy, nonatomic) NSString *entitlementKey;
@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *storefront;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSDictionary *utsRequiredRequestKeyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remotePlaybackDevice;
+ (id)remotePlaybackDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
