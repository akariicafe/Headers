@class RBProcess, RBSAssertionDescriptor;
@protocol RBDaemonContextProviding;

@interface RBAssertionAcquisitionContext : NSObject

@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic) RBSAssertionDescriptor *descriptor;
@property (readonly, nonatomic) id<RBDaemonContextProviding> daemonContext;
@property (retain, nonatomic) id holdToken;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL allowAbstractTarget;
@property (nonatomic) unsigned long long acquisitionPolicy;

+ (id)contextForProcess:(id)a0 withDescriptor:(id)a1 daemonContext:(id)a2;

- (void).cxx_destruct;

@end
