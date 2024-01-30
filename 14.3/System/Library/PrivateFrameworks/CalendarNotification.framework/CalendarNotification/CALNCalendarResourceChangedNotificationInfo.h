@class NSTimeZone, NSString, EKCalendarResourceChangeNotification, NSDate, NSURL;

@interface CALNCalendarResourceChangedNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, nonatomic) EKCalendarResourceChangeNotification *calendarNotification;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BOOL isDelegate;
@property (readonly, copy, nonatomic) NSString *sourceTitle;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceClientIdentifier:(id)a0 calendarNotification:(id)a1 changeType:(unsigned int)a2 date:(id)a3 allDay:(BOOL)a4 timeZone:(id)a5 expirationDate:(id)a6 launchURL:(id)a7 isDelegate:(BOOL)a8 sourceTitle:(id)a9 sourceIdentifier:(id)a10;

@end
