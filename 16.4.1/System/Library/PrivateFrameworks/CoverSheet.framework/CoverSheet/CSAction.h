@class SBFLockScreenActionContext;

@interface CSAction : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) SBFLockScreenActionContext *context;

+ (id)actionWithType:(long long)a0;
+ (id)actionWithType:(long long)a0 animated:(BOOL)a1;
+ (id)actionWithContext:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
