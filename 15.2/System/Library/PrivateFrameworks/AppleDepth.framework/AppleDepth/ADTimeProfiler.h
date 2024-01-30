@class NSMutableArray;

@interface ADTimeProfiler : NSObject

@property (retain, nonatomic) NSMutableArray *logArray;

- (void)start:(id)a0;
- (id)description;
- (id)log;
- (void)stop:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)currentTime;
- (void)reset;
- (void)startForOperationWithName:(id)a0;
- (void)stopForOperationWithName:(id)a0;
- (id)valueDictForOperationName:(id)a0;
- (void)printLog;
- (id)stringLog;

@end
