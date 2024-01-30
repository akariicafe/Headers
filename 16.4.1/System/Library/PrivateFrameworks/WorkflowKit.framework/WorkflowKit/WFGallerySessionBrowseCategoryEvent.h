@class NSString;

@interface WFGallerySessionBrowseCategoryEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (copy, nonatomic) NSString *galleryCategoryIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
