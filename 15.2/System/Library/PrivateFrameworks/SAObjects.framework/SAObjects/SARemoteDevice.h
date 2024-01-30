@class NSString, NSNumber;

@interface SARemoteDevice : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *personalDomainsAuthenticationMode;
@property (copy, nonatomic) NSNumber *personalDomainsEnabled;
@property (nonatomic) BOOL siriEnabled;
@property (copy, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteDevice;
+ (id)remoteDeviceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
