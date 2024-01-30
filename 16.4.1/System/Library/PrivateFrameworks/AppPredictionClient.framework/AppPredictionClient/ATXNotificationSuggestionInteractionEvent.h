@class NSUUID, NSString, NSDate;

@interface ATXNotificationSuggestionInteractionEvent : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) long long suggestionType;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) NSUUID *suggestionUUID;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)eventCausesSuggestionInactivity;
- (id)jsonRawData;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToATXNotificationSuggestionInteractionEvent:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithSuggestionType:(long long)a0 eventType:(long long)a1 suggestionUUID:(id)a2 eventDate:(id)a3;

@end
