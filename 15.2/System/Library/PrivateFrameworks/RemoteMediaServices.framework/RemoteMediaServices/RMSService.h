@class NSString;

@interface RMSService : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) int port;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long serviceDiscoverySource;
@property (nonatomic) long long serviceFlags;
@property (retain, nonatomic) NSString *homeSharingGroupKey;
@property (retain, nonatomic) NSString *uniqueIdentifier;

+ (id)servicesFromProtobufs:(id)a0;
+ (id)protobufsFromServices:(id)a0;

- (id)protobuf;
- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)data;
- (BOOL)isEqualToService:(id)a0;
- (BOOL)isLegacyAppleTV;
- (BOOL)isTVRemoteCoreSupported;

@end
