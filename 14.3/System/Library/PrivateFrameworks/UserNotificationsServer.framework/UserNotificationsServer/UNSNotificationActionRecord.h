@class NSString, NSArray, NSURL;

@interface UNSNotificationActionRecord : NSObject

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired;
@property (nonatomic, getter=isDestructive) BOOL destructive;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) BOOL shouldPreventNotificationDismiss;
@property (copy, nonatomic) NSString *textInputButtonTitle;
@property (copy, nonatomic) NSArray *textInputButtonTitleLocalizationArguments;
@property (copy, nonatomic) NSString *textInputButtonTitleLocalizationKey;
@property (copy, nonatomic) NSString *textInputPlaceholder;
@property (copy, nonatomic) NSArray *textInputPlaceholderLocalizationArguments;
@property (copy, nonatomic) NSString *textInputPlaceholderLocalizationKey;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleLocalizationArguments;
@property (copy, nonatomic) NSString *titleLocalizationKey;
@property (copy, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
