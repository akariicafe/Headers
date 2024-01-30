@class NSNumber, NSDate;

@interface SUCoreActivityOptions : NSObject

@property (retain, nonatomic) NSDate *runDate;
@property (retain, nonatomic) NSNumber *batteryLevelGreaterThan;
@property (retain, nonatomic) NSNumber *batteryLevelLessThan;
@property (nonatomic) int plugInState;
@property (nonatomic) int screenOnState;
@property (nonatomic) int networkState;
@property (nonatomic) int wifiState;
@property (nonatomic) int waking;
@property (nonatomic) int phoneCallState;
@property (nonatomic) int carplayState;
@property (nonatomic) int mediaPlayingState;

- (id)init;
- (void).cxx_destruct;

@end
