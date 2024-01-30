@interface iPodControlPlayingRequiredAction : iPodControlSimpleAction

- (id)init;
- (id)performSimpleAction;
- (void)_initializeSelf;
- (id)_firstActionToPerform;

@end
