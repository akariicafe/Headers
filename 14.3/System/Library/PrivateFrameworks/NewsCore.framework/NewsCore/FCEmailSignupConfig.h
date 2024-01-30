@class NSString;

@interface FCEmailSignupConfig : NSObject

@property (nonatomic) unsigned long long emailSignupStyle;
@property (copy, nonatomic) NSString *landingPageArticleID;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *alertEmailAvailableMessage;
@property (copy, nonatomic) NSString *alertEmailUnavailableMessage;
@property (copy, nonatomic) NSString *alertAcceptActionTitle;
@property (copy, nonatomic) NSString *alertDeclineActionTitle;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;

@end
