@interface iPodControlPlayingRequiredAction : iPodControlSimpleAction

- (id)init;
- (id)performSimpleAction;
- (id)_firstActionToPerform;
- (void)_initializeSelf;

@end
