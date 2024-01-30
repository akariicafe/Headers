@class NSString;

@interface WFShareShortcutEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *sharingMode;
@property (nonatomic) unsigned int actionCount;
@property (copy, nonatomic) NSString *addToSiriBundleIdentifier;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (copy, nonatomic) NSString *sharingDestinationBundleIdentifier;

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (void).cxx_destruct;

@end
