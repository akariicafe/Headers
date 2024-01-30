@interface APGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)willTransmitLocationForLanding;
- (void)willAccessLocationForLanding;
- (id)init;
- (void)dealloc;

@end
