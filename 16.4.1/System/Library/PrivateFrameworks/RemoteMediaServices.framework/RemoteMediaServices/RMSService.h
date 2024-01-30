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
@property (retain, nonatomic) id device;

+ (id)protobufsFromServices:(id)a0;
+ (id)servicesFromProtobufs:(id)a0;

- (id)initWithData:(id)a0;
- (id)protobuf;
- (id)data;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToService:(id)a0;
- (BOOL)isLegacyAppleTV;
- (BOOL)isTVRemoteCoreSupported;

@end
