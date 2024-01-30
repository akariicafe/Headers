@class NSString, ICLiveLink;

@interface MPCPlaybackSharedListeningProperties : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICLiveLink *liveLink;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) NSString *sessionKey;

+ (id)payloadValueFromJSONValue:(id)a0;
+ (id)propertiesWithSessionIdentifier:(id)a0 sessionKey:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)mpc_jsonValue;

@end
