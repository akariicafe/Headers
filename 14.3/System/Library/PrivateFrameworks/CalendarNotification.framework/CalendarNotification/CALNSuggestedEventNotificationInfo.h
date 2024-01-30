@class NSString, NSURL, NSDate, EKCalendarSuggestionNotification;

@interface CALNSuggestedEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) EKCalendarSuggestionNotification *suggestionNotification;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)a0 launchURL:(id)a1 expirationDate:(id)a2 suggestionNotification:(id)a3;

@end
