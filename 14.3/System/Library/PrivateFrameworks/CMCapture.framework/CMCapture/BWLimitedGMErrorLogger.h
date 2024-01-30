@class NSString;

@interface BWLimitedGMErrorLogger : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int maxLoggingCount;
@property (readonly, nonatomic) int currentLoggingCount;

- (void)dealloc;
- (void)logErrorNumber:(int)a0 errorString:(id)a1;
- (id)initWithName:(id)a0 maxLoggingCount:(int)a1;
- (void)resetCurrentLoggingCounter;

@end
