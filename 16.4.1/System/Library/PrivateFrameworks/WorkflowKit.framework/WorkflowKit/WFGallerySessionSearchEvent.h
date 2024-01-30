@class NSString;

@interface WFGallerySessionSearchEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *sessionIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
