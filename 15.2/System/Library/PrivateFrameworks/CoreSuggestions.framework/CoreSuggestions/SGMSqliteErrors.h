@class PETScalarEventTracker;

@interface SGMSqliteErrors : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)a0 errorCode:(unsigned long long)a1;

@end
