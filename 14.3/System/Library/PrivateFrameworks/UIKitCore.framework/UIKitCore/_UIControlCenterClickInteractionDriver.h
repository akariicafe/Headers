@interface _UIControlCenterClickInteractionDriver : _UILongPressTimeoutClickInteractionDriver

+ (BOOL)prefersCancelsTouchesInView;

- (id)init;
- (double)clickTimeoutDuration;
- (double)clickDownDuration;

@end
