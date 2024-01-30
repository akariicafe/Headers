@class NSString, NSTimeZone;

@interface MPCPlaybackDelegationProperties : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long storeAccountID;
@property (readonly, copy, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) long long systemReleaseType;
@property (readonly, copy, nonatomic) NSString *requestUserAgent;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;

+ (id)payloadValueFromJSONValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;
- (void).cxx_destruct;
- (id)initWithStoreAccountID:(unsigned long long)a0 deviceGUID:(id)a1;
- (id)mpc_jsonValue;

@end
