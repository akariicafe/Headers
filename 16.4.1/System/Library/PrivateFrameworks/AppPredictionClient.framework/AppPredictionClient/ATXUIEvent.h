@class NSString, NSObject;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

@interface ATXUIEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionUIInteractionProtocol> *event;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiEventWithLockscreenEvent:(id)a0;
+ (id)uiEventWithSpotlightEvent:(id)a0;
+ (id)uiEventWithHomeScreenEvent:(id)a0;
+ (id)uiEventWithShortcutsEditorEvent:(id)a0;
+ (id)uiEventWithAppDirectoryEvent:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)json;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)jsonDict;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)appDirectoryEvent;
- (id)initWithProtoData:(id)a0;
- (id)homeScreenEvent;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (BOOL)isEqualToATXUIEvent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (id)shortcutsEditorEvent;
- (id)initWithConsumerSubType:(unsigned char)a0 event:(id)a1;
- (id)init;
- (id)lockscreenEvent;
- (id)serialize;
- (id)spotlightEvent;
- (void).cxx_destruct;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;

@end
