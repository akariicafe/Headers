@class NSString, NSDate;

@interface MNTraceNavigationEventRow : NSObject

@property (nonatomic) double relativeTimestamp;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long locationID;
@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventDescription;
@property (copy, nonatomic) NSString *speakableEventDescription;

- (id)description;
- (void).cxx_destruct;

@end
