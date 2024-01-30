@class NSString, NSUUID, NSArray, NSDate;

@interface ATXBiomeProactiveSuggestionUIFeedbackResult : NSObject <BMStoreData, ATXProtoBufWrapper>

@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID;
@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSDate *clientModelCacheCreationDate;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSArray *shownSuggestions;
@property (readonly, nonatomic) NSArray *engagedSuggestions;
@property (readonly, nonatomic) NSArray *rejectedSuggestions;
@property (readonly, nonatomic) long long suggestionExecutableType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithSessionId:(id)a0 blendingUICacheUpdateUUID:(id)a1 clientModelId:(id)a2 clientModelCacheCreationDate:(id)a3 consumerSubType:(unsigned char)a4 sessionStartDate:(id)a5 sessionEndDate:(id)a6 shownSuggestions:(id)a7 engagedSuggestions:(id)a8 rejectedSuggestions:(id)a9;
- (BOOL)isEqualToATXBiomeProactiveSuggestionUIFeedbackResult:(id)a0;
- (id)initWithProactiveSuggestionUIFeedbackResult:(id)a0;

@end
