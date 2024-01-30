@class NSString, NSURL;

@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying>

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSURL *buttonURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIntentName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictonary:(id)a0;

@end
