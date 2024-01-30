@interface UIPPTRequestAction : BSAction

- (id)initWithDesiredOrientation:(long long)a0;
- (BOOL)shouldChangeOrientation;
- (long long)orientationRequested;
- (long long)UIActionType;

@end
