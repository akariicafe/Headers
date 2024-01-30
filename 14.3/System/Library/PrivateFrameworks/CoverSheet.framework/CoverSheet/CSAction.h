@class SBFLockScreenActionContext;

@interface CSAction : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) SBFLockScreenActionContext *context;

+ (id)actionWithContext:(id)a0;
+ (id)actionWithType:(long long)a0;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;

@end
