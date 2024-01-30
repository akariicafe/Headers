@class NSUUID;

@interface HMDBackingStoreUpdateObjectReference : NSOperation

@property (weak, nonatomic) id object;
@property (retain, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (void)main;
- (id)initWithObject:(id)a0 uuid:(id)a1;

@end
