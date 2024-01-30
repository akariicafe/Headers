@interface PRUIRequestDismissalAction : BSAction

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;

+ (id)actionWithAnimation:(BOOL)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
