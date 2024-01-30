@class NSDate;

@interface WPDStat : NSObject

@property double currentTime;
@property (retain) NSDate *lastTime;

- (void)stopTime;
- (void)calculateTimeUpdate;
- (void)startTime;
- (id)init;
- (void).cxx_destruct;

@end
