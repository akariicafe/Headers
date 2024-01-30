@class CAXContextualAction, CAXPredictionContext, NSString, CAXSuggestion;

@interface CAXContextualActionsFeedbackEvent : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CAXContextualAction *selectedAction;
@property (copy, nonatomic) CAXSuggestion *suggestion;
@property (copy, nonatomic) CAXPredictionContext *deviceContext;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)jsonRawData;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithSelectedAction:(id)a0 suggestion:(id)a1 deviceContext:(id)a2 sessionIdentifier:(id)a3;

@end
