@class NSString, NSDate;

@interface MNTraceNavigationEventRow : NSObject

@property (nonatomic) double relativeTimestamp;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long locationID;
@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventDescription;
@property (copy, nonatomic) NSString *speakableEventDescription;

- (void).cxx_destruct;
- (id)description;

@end
