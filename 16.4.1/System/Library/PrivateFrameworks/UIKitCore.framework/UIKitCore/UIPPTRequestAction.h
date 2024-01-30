@interface UIPPTRequestAction : BSAction

- (long long)UIActionType;
- (id)initWithDesiredOrientation:(long long)a0;
- (long long)orientationRequested;
- (BOOL)shouldChangeOrientation;

@end
