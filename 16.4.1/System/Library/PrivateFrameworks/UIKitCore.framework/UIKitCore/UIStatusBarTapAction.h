@interface UIStatusBarTapAction : BSAction

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double xPosition;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithType:(long long)a0 xPosition:(double)a1;

@end
