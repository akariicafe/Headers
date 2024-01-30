@class NSString;

@interface WFEditShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (nonatomic) unsigned int actionCount;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (nonatomic) unsigned int numberOfEngagedSuggestions;
@property (nonatomic) unsigned int numberOfManuallyAddedActions;
@property (nonatomic) unsigned int startingActionCount;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
