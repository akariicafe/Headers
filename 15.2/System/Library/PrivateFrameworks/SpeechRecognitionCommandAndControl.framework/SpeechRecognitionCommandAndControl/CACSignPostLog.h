@interface CACSignPostLog : NSObject

@property (nonatomic) unsigned long long currentPerfID;

+ (id)sharedInstance;
+ (id)sharedLog;
+ (id)_sFetchElementsLog;
+ (void)FetchElementsEventBeganWithReason:(id)a0 expectedDelay:(double)a1;
+ (void)FetchElementsEventCompletedWithNumberOfElements:(unsigned long long)a0 numberOfElementsAlreadyCached:(unsigned long long)a1;
+ (void)CommandStringReceived:(id)a0;
+ (void)CommandStringExecuted:(id)a0 success:(BOOL)a1;

@end
