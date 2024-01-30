@interface UIStatusBarTapAction : BSAction

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double xPosition;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithType:(long long)a0 xPosition:(double)a1;
- (long long)UIActionType;

@end
