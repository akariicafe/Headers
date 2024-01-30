@class PETScalarEventTracker;

@interface SGMSqliteErrors : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker;

- (id)init;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)a0 errorCode:(unsigned long long)a1;

@end
