@interface _UIControlCenterClickInteractionDriver : _UILongPressTimeoutClickInteractionDriver

+ (BOOL)prefersCancelsTouchesInView;

- (double)clickTimeoutDuration;
- (id)init;
- (double)clickDownDuration;

@end
