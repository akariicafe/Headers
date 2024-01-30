@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)startTime;
- (void)stopTime;
- (void).cxx_destruct;
- (id)init;
- (void)calculateTimeUpdate;

@end
