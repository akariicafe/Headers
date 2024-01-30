@class ATXHomeScreenEventMetadata, NSString, NSArray, NSDate;

@interface ATXHomeScreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *eventTypeString;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *blendingCacheId;
@property (retain, nonatomic) NSString *stackId;
@property (retain, nonatomic) NSString *widgetBundleId;
@property (retain, nonatomic) NSString *widgetKind;
@property (retain, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL isSuggestedWidget;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (nonatomic) unsigned long long widgetSize;
@property (nonatomic) unsigned long long stackKind;
@property (nonatomic) unsigned long long stackLocation;
@property (retain, nonatomic) NSString *intentDescription;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (retain, nonatomic) NSArray *suggestionIds;
@property (retain, nonatomic) ATXHomeScreenEventMetadata *metadata;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventForPageShownWithIndex:(unsigned long long)a0 widgetsByStack:(id)a1 blendingCacheIdentifier:(id)a2;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)_uuidArrayFromStringArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (unsigned char)feedbackConsumerSubType;
- (BOOL)isEqualToATXHomeScreenEvent:(id)a0;
- (id)serialize;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;

@end
