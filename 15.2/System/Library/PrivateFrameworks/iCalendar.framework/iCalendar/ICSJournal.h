@class NSArray, NSString, NSURL, ICSDate, ICSUserAddress;

@interface ICSJournal : ICSComponent

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property (retain) ICSDate *last_modified;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property unsigned long long sequence;
@property int status;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain) NSURL *url;

+ (id)name;

- (BOOL)validate:(id *)a0;

@end
