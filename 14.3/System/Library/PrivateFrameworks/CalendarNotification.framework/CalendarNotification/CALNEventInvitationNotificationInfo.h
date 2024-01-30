@class EKCalendarEventInvitationNotification, NSString, NSDictionary, NSURL, NSDate, EKConflictDetails;

@interface CALNEventInvitationNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) EKConflictDetails *conflictDetails;
@property (readonly, nonatomic) EKCalendarEventInvitationNotification *eventInvitationNotification;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *eventURI;
@property (readonly, nonatomic) BOOL isDelegate;
@property (readonly, copy, nonatomic) NSString *sourceTitle;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)initWithSourceClientIdentifier:(id)a0 launchURL:(id)a1 expirationDate:(id)a2 conflictDetails:(id)a3 eventInvitationNotification:(id)a4 eventRepresentationDictionary:(id)a5 eventURI:(id)a6 isDelegate:(BOOL)a7 sourceTitle:(id)a8 sourceIdentifier:(id)a9;
- (id)description;

@end
