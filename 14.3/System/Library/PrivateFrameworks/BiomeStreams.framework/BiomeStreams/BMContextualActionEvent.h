@class NSString, NSArray;

@interface BMContextualActionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSArray *contents;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)jsonDict;
- (id)init;
- (void).cxx_destruct;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 appName:(id)a1 actionName:(id)a2 contents:(id)a3 parameters:(id)a4;

@end
