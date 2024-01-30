@class NSString;

@interface ATXMinimalAction : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) long long paramHash;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)datastore;
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
- (id)actionFromDatastoreLookup;
- (id)actionFromDatastoreLookupForDatastore:(id)a0;
- (id)initWithBundleId:(id)a0 actionType:(id)a1 paramHash:(long long)a2;
- (BOOL)isEqualToATXMinimalAction:(id)a0;

@end
