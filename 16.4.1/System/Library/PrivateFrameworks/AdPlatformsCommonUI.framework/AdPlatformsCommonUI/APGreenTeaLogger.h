@interface APGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)willAccessLocation;
- (void)dealloc;
- (void)willTransmitLocationFor:(unsigned long long)a0;
- (id)init;

@end
