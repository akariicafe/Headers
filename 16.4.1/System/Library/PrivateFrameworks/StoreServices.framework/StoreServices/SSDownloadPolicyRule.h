@class NSSet, NSString;

@interface SSDownloadPolicyRule : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long downloadSizeLimit;
@property (copy, nonatomic) NSSet *applicationStates;
@property (copy, nonatomic) NSSet *networkTypes;
@property (copy, nonatomic) NSSet *userDefaultStates;
@property (readonly, nonatomic, getter=isCellularAllowed) BOOL cellularAllowed;
@property (readonly, nonatomic, getter=isWiFiAllowed) BOOL wiFiAllowed;
@property (nonatomic) float batteryLevel;
@property (nonatomic) long long cellularDataStates;
@property (nonatomic) long long powerStates;
@property (nonatomic) long long registrationStates;
@property (nonatomic) long long timeLimitStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addUserDefaultState:(id)a0;
- (void)addNetworkType:(long long)a0;
- (void)addApplicationState:(id)a0;
- (void)unionPolicyRule:(id)a0;

@end
