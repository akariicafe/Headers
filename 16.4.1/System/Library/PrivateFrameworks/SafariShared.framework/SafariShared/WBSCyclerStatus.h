@class NSString;

@interface WBSCyclerStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *activeTestSuiteName;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic, getter=isConnectedToTestTarget) BOOL connectedToTestTarget;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) unsigned long long iterationCount;
@property (readonly, nonatomic) double executionTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithActiveTestSuiteName:(id)a0 seed:(unsigned long long)a1 isConnectedToTestTarget:(BOOL)a2 isRunning:(BOOL)a3 iterationCount:(unsigned long long)a4 executionTime:(double)a5;

@end
