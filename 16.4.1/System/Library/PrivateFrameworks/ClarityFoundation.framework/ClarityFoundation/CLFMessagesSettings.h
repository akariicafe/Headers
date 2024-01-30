@class NSString;

@interface CLFMessagesSettings : CLFBaseSettings

@property (class, readonly, nonatomic) CLFMessagesSettings *sharedInstance;

@property (retain, nonatomic) NSString *communicationLimit;
@property (nonatomic) BOOL conversationDetailsEnabled;

+ (id)domainName;
+ (id)allPreferenceSelectorsAsStrings;

- (id)init;

@end
