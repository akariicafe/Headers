@class NSString, NSURL, ICSDate, ICSDuration, ICSUserAddress;

@interface ICSAvailability : ICSComponent

@property (retain) ICSDate *created;
@property (retain) NSString *uid;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDuration *duration;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *last_modified;
@property unsigned long long sequence;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSString *summary;
@property (retain) NSURL *url;

+ (id)name;

@end
