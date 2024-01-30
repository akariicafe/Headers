@class NSString;

@interface MPStoreModelRequest : MPModelRequest {
    BOOL _didSetTimeoutInterval;
}

@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *clientPlatformIdentifier;
@property (nonatomic) unsigned long long authenticationOptions;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
