@class RBProcess, RBSAssertionDescriptor;

@interface RBAssertionAcquisitionContext : NSObject

@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic) RBSAssertionDescriptor *descriptor;
@property (retain, nonatomic) id holdToken;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL allowAbstractTarget;
@property (nonatomic) unsigned long long acquisitionPolicy;

+ (id)contextForProcess:(id)a0 withDescriptor:(id)a1;

- (void).cxx_destruct;

@end
