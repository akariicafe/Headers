@class NSDictionary, DADevice, NSString;

@interface DAEndpoint : NSObject

@property (nonatomic) unsigned long long addTicks;
@property (nonatomic) BOOL grouped;
@property (weak, nonatomic) DADevice *parentDevice;
@property (readonly, copy, nonatomic) NSDictionary *persistentDictionaryRepresentation;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *airplayDeviceID;
@property (copy, nonatomic) NSString *bonjourFullName;
@property (copy, nonatomic) NSString *bonjourHostname;
@property (copy, nonatomic) NSString *bonjourName;
@property (copy, nonatomic) NSString *bonjourType;
@property (nonatomic) unsigned int bonjourInterfaceIndex;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *ipv4String;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL missing;
@property (copy, nonatomic) NSString *protocolTypeString;
@property (copy, nonatomic) DADevice *underlyingDADevice;
@property (copy, nonatomic) NSDictionary *userInfo;

- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithEndpoint:(id)a0;
- (id)initWithPersistentDictionaryRepresentation:(id)a0 error:(id *)a1;
- (BOOL)matchesSelectedEndpoint:(id)a0 allowName:(BOOL)a1;
- (void)mergeMissingInfoFromEndpoint:(id)a0;
- (BOOL)sameDeviceAsEndpoint:(id)a0;

@end
