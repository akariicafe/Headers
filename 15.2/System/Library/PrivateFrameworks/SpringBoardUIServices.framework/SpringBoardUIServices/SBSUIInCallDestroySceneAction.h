@class NSString;

@interface SBSUIInCallDestroySceneAction : BSAction

@property (readonly, copy, nonatomic) NSString *analyticsSource;
@property (readonly, nonatomic) long long destructionReason;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithDestructionReason:(long long)a0 analyticsSource:(id)a1 timeout:(double)a2 withResponseHandler:(id /* block */)a3;

@end
