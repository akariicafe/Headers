@class NSString;

@interface BMDevicePluggedIn : BMEventBase <BMStoreData>

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) BOOL wireless;
@property (nonatomic) BOOL hasWireless;
@property (readonly, nonatomic) long long adapterType;
@property (nonatomic) BOOL hasAdapterType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (id)initWithStarting:(id)a0 wireless:(id)a1 adapterType:(id)a2;

@end
