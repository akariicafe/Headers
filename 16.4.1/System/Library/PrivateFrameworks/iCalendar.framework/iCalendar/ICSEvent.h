@class NSString, NSArray, NSURL, ICSTravelDuration, ICSDate, ICSDuration, ICSTravelAdvisoryBehavior, ICSStructuredLocation, ICSUserAddress;

@interface ICSEvent : ICSCalendarItem

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (readonly) BOOL isAllDay;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property unsigned long long sequence;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property int status;
@property (retain) NSString *summary;
@property (nonatomic) int transp;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (retain) NSString *x_apple_dropbox;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property (nonatomic) int x_apple_ews_busystatus;
@property (nonatomic) BOOL x_apple_dontschedule;
@property BOOL x_apple_ignore_on_restore;
@property (nonatomic) BOOL x_apple_needs_reply;
@property (nonatomic) BOOL x_wr_itipalreadysent;
@property (nonatomic) BOOL x_wr_itipstatusattendeeml;
@property (nonatomic) BOOL x_wr_itipstatusml;
@property (nonatomic) BOOL x_wr_rsvpneeded;
@property (retain, nonatomic) NSArray *x_calendarserver_attendee_comment;
@property (retain, nonatomic) NSString *x_calendarserver_private_comment;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) NSArray *conferences;
@property (retain) ICSStructuredLocation *x_apple_travel_start;
@property (retain) ICSTravelDuration *x_apple_travel_duration;
@property (retain) ICSStructuredLocation *x_apple_end_location;
@property (retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior;
@property (retain, nonatomic) NSString *x_apple_special_day;
@property BOOL forcedAllDay;

+ (id)name;

- (BOOL)validate:(id *)a0;
- (void)setX_wr_rsvpneeded:(BOOL)a0;
- (void)setX_apple_needs_reply:(BOOL)a0;
- (BOOL)x_wr_rsvpneeded;
- (void)fixAttendeeComments;
- (void)fixComponent;
- (BOOL)isDefaultAlarmDeleted;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)a0;
- (id)propertiesToIncludeForChecksumVersion:(int)a0;
- (void)setX_wr_itipalreadysent:(BOOL)a0;
- (void)setX_wr_itipstatusattendeeml:(BOOL)a0;
- (void)setX_wr_itipstatusml:(BOOL)a0;
- (BOOL)x_apple_needs_reply;
- (BOOL)x_wr_itipalreadysent;
- (BOOL)x_wr_itipstatusattendeeml;
- (BOOL)x_wr_itipstatusml;

@end
