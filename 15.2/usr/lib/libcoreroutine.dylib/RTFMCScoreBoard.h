@class NSDate;

@interface RTFMCScoreBoard : NSObject

@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) int locationType;
@property (nonatomic) BOOL engaged;
@property (nonatomic) BOOL assisted;
@property (nonatomic) int parkingEvents;
@property (nonatomic) int engagedParkingEvents;
@property (nonatomic) int assistedParkingEvents;
@property (nonatomic) int engagements;
@property (nonatomic) int assistances;
@property (nonatomic) int suppressedEvents;

- (void)engagementEvent;
- (void)parkingEvent;
- (void)clearScoreBoard;
- (void).cxx_destruct;
- (id)init;
- (void)assistanceEvent;
- (id)initWithLocationType:(int)a0;
- (void)suppressedEvent;
- (void)copyToMetric:(id)a0;

@end
