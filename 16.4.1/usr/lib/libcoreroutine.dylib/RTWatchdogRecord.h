@class NSDate;
@protocol RTWatchdogProtocol;

@interface RTWatchdogRecord : NSObject

@property (weak, nonatomic) id<RTWatchdogProtocol> object;
@property (retain, nonatomic) NSDate *checkInStartDate;
@property (retain, nonatomic) NSDate *checkInStopDate;
@property (readonly, nonatomic) double timeout;

- (BOOL)isPendingCheckIn;
- (id)init;
- (id)initWithObject:(id)a0 timeout:(double)a1;
- (double)getLatency;
- (id)description;
- (void).cxx_destruct;

@end
