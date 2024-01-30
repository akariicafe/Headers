@class EKCalendarEventInvitationNotification, NSString, NSDictionary, NSURL, NSDate;

@interface CALNEventCanceledNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) EKCalendarEventInvitationNotification *eventInvitationNotification;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, nonatomic) BOOL isDelegate;
@property (readonly, copy, nonatomic) NSString *sourceTitle;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)a0 launchURL:(id)a1 expirationDate:(id)a2 eventInvitationNotification:(id)a3 eventRepresentationDictionary:(id)a4 isDelegate:(BOOL)a5 sourceTitle:(id)a6 sourceIdentifier:(id)a7;

@end
