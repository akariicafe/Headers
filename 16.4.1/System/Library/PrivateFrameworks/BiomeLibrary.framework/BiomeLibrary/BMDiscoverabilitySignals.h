@class NSString, NSData;

@interface BMDiscoverabilitySignals : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *contentIdentifier;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) NSData *userInfo;
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
- (void).cxx_destruct;
- (id)initWithContentIdentifier:(id)a0 context:(id)a1 osBuild:(id)a2 userInfo:(id)a3;

@end
