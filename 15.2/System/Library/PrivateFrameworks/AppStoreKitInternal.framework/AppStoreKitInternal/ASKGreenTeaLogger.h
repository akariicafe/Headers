@interface ASKGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)willAccessLocationForSearch;
- (void)willTransmitLocationForSearch;
- (void)willRequestAppList;
- (id)init;
- (void)dealloc;

@end
