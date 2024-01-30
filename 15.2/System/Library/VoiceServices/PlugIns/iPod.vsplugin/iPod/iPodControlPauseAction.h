@interface iPodControlPauseAction : iPodControlSimpleAction {
    BOOL _needsPause;
}

- (id)init;
- (id)performSimpleAction;

@end
