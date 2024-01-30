@class NSString, NSKeyedArchiver, NSData;

@interface HMDRemoteKeyedArchiver : HMFObject

@property (retain, nonatomic) NSKeyedArchiver *archiver;
@property (retain, nonatomic) NSString *transportType;
@property (readonly, copy) NSData *encodedData;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishEncoding;
- (void)setClassName:(id)a0 forClass:(Class)a1;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)a0 remoteGateway:(BOOL)a1 remoteUserIsAdministrator:(BOOL)a2 user:(id)a3 dataVersion:(long long)a4 supportedFeatures:(id)a5;
- (id)initForWritingWithRemoteDeviceIsOnSameAccount:(BOOL)a0 remoteGateway:(BOOL)a1 remoteUserIsAdministrator:(BOOL)a2 user:(id)a3 supportedFeatures:(id)a4;

@end
