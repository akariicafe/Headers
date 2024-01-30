@class NSString;

@interface TVRMSService : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) int port;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long serviceDiscoverySource;
@property (nonatomic) long long serviceLegacyFlags;
@property (retain, nonatomic) NSString *homeSharingGroupKey;

+ (id)servicesFromProtobufs:(id)a0;
+ (id)protobufsFromServices:(id)a0;

- (BOOL)isLegacy;
- (id)protobuf;
- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)data;
- (BOOL)isEqualToService:(id)a0;

@end
