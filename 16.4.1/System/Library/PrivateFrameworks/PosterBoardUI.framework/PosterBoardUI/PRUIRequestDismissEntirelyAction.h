@interface PRUIRequestDismissEntirelyAction : BSAction

@property (readonly, nonatomic) BOOL shouldActivateCurrentPoster;

+ (id)actionActivatingCurrentPoster:(BOOL)a0;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
