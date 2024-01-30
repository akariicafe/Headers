@class NSArray;

@interface AMSNotificationSettingsResult : NSObject

@property (readonly, nonatomic) NSArray *sections;

+ (id)_sectionsFromDictionaryRepresentation:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;

@end
