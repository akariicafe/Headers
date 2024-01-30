@class NSString, NSArray, NSDate, CLLocation;

@interface CLSEvent : CLSPrimitive

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSArray *performers;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic, getter=hasMeetingRoom) BOOL meetingRoom;
@property (nonatomic, getter=isOrganizedByMe) BOOL organizedByMe;
@property (nonatomic, getter=isAccepted) BOOL accepted;

+ (id)event;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
