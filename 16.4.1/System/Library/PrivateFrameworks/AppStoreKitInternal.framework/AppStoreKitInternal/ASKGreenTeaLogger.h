@interface ASKGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

- (void)dealloc;
- (void)willRequestAppList;
- (void)willTransmitLocationForSearch;
- (id)init;
- (void)willAccessLocationForSearch;

@end
