@class NSString;

@interface BWLimitedGMErrorLogger : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int maxLoggingCount;
@property (readonly, nonatomic) int currentLoggingCount;

- (id)initWithName:(id)a0 maxLoggingCount:(int)a1;
- (void)resetCurrentLoggingCounter;
- (void)logErrorNumber:(int)a0 errorString:(id)a1;
- (void)dealloc;

@end
