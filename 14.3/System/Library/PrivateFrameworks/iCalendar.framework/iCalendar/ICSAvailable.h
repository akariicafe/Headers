@class NSArray, NSString, ICSDate, ICSDuration;

@interface ICSAvailable : ICSComponent

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *rrule;
@property (retain) NSString *uid;

+ (id)name;

@end
