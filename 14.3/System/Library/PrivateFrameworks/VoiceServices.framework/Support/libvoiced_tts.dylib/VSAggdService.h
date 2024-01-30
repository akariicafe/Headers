@class NSString;

@interface VSAggdService : NSObject

@property (retain, nonatomic) NSString *loggingPrefix;

+ (id)defaultService;

- (void).cxx_destruct;
- (void)tallyTask:(id)a0;
- (void)tallySynthesisCore:(id)a0;
- (id)initWithLoggingPrefix:(id)a0;
- (void)recordCategory:(id)a0 value:(id)a1;

@end
