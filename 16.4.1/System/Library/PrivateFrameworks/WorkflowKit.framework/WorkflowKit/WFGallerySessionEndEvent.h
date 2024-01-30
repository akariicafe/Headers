@class NSString;

@interface WFGallerySessionEndEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) unsigned int duration;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
