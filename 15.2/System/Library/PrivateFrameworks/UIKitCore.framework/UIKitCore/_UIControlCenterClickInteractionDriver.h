@interface _UIControlCenterClickInteractionDriver : _UILongPressTimeoutClickInteractionDriver

+ (BOOL)prefersCancelsTouchesInView;

- (double)clickTimeoutDuration;
- (double)clickDownDuration;
- (id)init;

@end
