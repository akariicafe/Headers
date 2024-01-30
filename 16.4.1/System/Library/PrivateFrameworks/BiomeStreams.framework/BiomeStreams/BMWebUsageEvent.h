@class NSString, NSURL;

@interface BMWebUsageEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) unsigned long long usageState;
@property (readonly, nonatomic) NSURL *webpageURL;
@property (readonly, nonatomic) NSString *webDomain;
@property (readonly, nonatomic) NSString *applicationID;
@property (copy, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) BOOL isUsageTrusted;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithEventDate:(id)a0 usageState:(unsigned long long)a1 webpageURL:(id)a2 webDomain:(id)a3 applicationID:(id)a4 isUsageTrusted:(BOOL)a5;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(double)a1 usageState:(unsigned long long)a2 webpageURL:(id)a3 webDomain:(id)a4 applicationID:(id)a5 deviceID:(id)a6 isUsageTrusted:(BOOL)a7;

@end
