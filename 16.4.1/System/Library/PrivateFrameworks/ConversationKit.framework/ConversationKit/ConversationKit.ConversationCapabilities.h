@class NSString, _TtC15ConversationKit24ConversationCapabilities;

@interface ConversationKit.ConversationCapabilities : NSObject

@property (class, nonatomic, readonly) _TtC15ConversationKit24ConversationCapabilities *shared;
@property (class, nonatomic, readonly) NSString *captionEnablementChangedNotification;

@property (nonatomic) BOOL captioningAccessibilitySettingEnabled;
@property (nonatomic, readonly) BOOL isCaptioningSupported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
