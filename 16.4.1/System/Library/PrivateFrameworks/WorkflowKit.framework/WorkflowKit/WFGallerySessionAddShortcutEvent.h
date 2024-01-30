@class NSString;

@interface WFGallerySessionAddShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *shortcutIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
