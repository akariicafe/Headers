@interface WFGreenTeaLogger : NSObject

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *logger;

+ (void)log:(id)a0;
+ (id)sharedLogger;

- (void)log:(id)a0;
- (void)dealloc;
- (id)init;

@end
