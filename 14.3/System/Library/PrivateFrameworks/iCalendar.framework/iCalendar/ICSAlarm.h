@class NSArray, NSString, NSData, ICSTrigger, ICSDateTimeUTCValue, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent

@property (nonatomic) int action;
@property (retain, nonatomic) ICSDateTimeUTCValue *acknowledged;
@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property (retain) NSString *description;
@property (retain) NSString *summary;
@property (retain) ICSTrigger *trigger;
@property (retain) NSString *uid;
@property (retain, nonatomic) NSString *relatedTo;
@property (retain, nonatomic) NSData *bookmark;
@property (retain, nonatomic) NSString *x_wr_alarmuid;
@property (retain, nonatomic) NSString *x_apple_proximity;
@property (nonatomic) BOOL x_apple_default_alarm;
@property (nonatomic) BOOL x_apple_local_default_alarm;
@property (nonatomic) BOOL x_apple_travel_default_alarm;
@property (retain) ICSStructuredLocation *x_apple_structured_location;

+ (id)name;
+ (int)actionFromICSString:(id)a0;
+ (id)ICSStringFromAction:(int)a0;
+ (id)parseableDocumentFromICS:(id)a0;
+ (id)createNoneAlarm;

- (void)setBookmark:(id)a0;
- (id)bookmark;
- (void)fixAlarm;
- (BOOL)isNoneAlarm;

@end
