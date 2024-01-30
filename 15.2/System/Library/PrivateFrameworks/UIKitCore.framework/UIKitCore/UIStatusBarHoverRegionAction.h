@interface UIStatusBarHoverRegionAction : BSAction

@property (readonly, nonatomic) long long region;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithRegion:(long long)a0;

@end
