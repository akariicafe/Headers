@class NSString, NSArray;

@interface BMInferredModeEvent : NSObject <BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *suggestionUUID;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) NSString *originBundleId;
@property (readonly, nonatomic) BOOL isAutomationEnabled;
@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (readonly, nonatomic) unsigned long long uiLocation;
@property (readonly, nonatomic) double confidenceScore;
@property (readonly, nonatomic) NSString *originAnchorType;
@property (readonly, nonatomic) NSArray *serializedTriggers;
@property (readonly, nonatomic) unsigned long long modeType;
@property (readonly, nonatomic) NSString *userModeName;
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
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithAbsoluteTimestamp:(double)a0 modeUUID:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(BOOL)a5 uiLocation:(unsigned long long)a6 isStart:(BOOL)a7 confidenceScore:(double)a8 suggestionUUID:(id)a9 serializedTriggers:(id)a10 shouldSuggestTriggers:(BOOL)a11 modeType:(unsigned long long)a12 userModeName:(id)a13;
- (id)initWithAbsoluteTimestamp:(double)a0 modeIdentifier:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(BOOL)a5 uiLocation:(unsigned long long)a6 isStart:(BOOL)a7 confidenceScore:(double)a8 uuid:(id)a9 serializedTriggers:(id)a10;
- (id)initWithAbsoluteTimestamp:(double)a0 modeIdentifier:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(BOOL)a5 uiLocation:(unsigned long long)a6 isStart:(BOOL)a7 confidenceScore:(double)a8 uuid:(id)a9 serializedTriggers:(id)a10 modeType:(unsigned long long)a11;
- (id)initWithAbsoluteTimestamp:(double)a0 modeUUID:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(BOOL)a5 uiLocation:(unsigned long long)a6 isStart:(BOOL)a7 confidenceScore:(double)a8 suggestionUUID:(id)a9 serializedTriggers:(id)a10 modeType:(unsigned long long)a11;
- (id)initWithAbsoluteTimestamp:(double)a0 modeUUID:(id)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 isAutomationEnabled:(BOOL)a5 uiLocation:(unsigned long long)a6 isStart:(BOOL)a7 confidenceScore:(double)a8 suggestionUUID:(id)a9 serializedTriggers:(id)a10 shouldSuggestTriggers:(BOOL)a11 modeType:(unsigned long long)a12;

@end
