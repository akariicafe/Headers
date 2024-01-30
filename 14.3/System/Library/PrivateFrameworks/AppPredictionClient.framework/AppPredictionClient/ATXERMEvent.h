@class ATXEngagementRecordEntry, NSArray, NSString, NSDate;

@interface ATXERMEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) ATXEngagementRecordEntry *entry;
@property (readonly, nonatomic) NSArray *clientModelIds;
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
- (id)initWithEventDate:(id)a0 eventType:(unsigned long long)a1 recordEntry:(id)a2 clientModelIds:(id)a3;
- (BOOL)isEqualToATXERMEvent:(id)a0;

@end
