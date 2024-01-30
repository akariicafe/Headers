@class RBProcessState, RBSProcessIdentity;

@interface RBProcessStateChange : NSObject

@property (readonly, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBProcessState *originalState;
@property (readonly, nonatomic) RBProcessState *updatedState;

- (id)initWithIdentity:(id)a0 originalState:(id)a1 updatedState:(id)a2;
- (id)changeByApplyingChange:(id)a0;
- (void).cxx_destruct;

@end
