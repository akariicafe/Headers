@class SBFLockScreenActionContext;

@interface CSAction : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) SBFLockScreenActionContext *context;

+ (id)actionWithContext:(id)a0;
+ (id)actionWithType:(long long)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
