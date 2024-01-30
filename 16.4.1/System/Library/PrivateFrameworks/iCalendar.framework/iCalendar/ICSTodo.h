@class NSData, NSString, NSArray, NSURL, ICSDate, ICSDuration, ICSStructuredLocation, ICSUserAddress;

@interface ICSTodo : ICSCalendarItem

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain, nonatomic) ICSDate *completed;
@property (nonatomic) long long percentComplete;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain, nonatomic) ICSDate *due;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property unsigned long long priority;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property unsigned long long sequence;
@property int status;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property (nonatomic) unsigned long long x_apple_sort_order;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) NSArray *conferences;
@property (retain, nonatomic) NSArray *x_apple_activity;
@property (retain, nonatomic) NSData *x_apple_appLinkData;

+ (id)name;

- (BOOL)validate:(id *)a0;
- (void)fixComponent;
- (id)propertiesToIncludeForChecksumVersion:(int)a0;

@end
