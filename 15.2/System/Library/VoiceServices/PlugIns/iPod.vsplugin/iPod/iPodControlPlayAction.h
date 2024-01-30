@interface iPodControlPlayAction : iPodControlSimpleAction {
    BOOL _needsPlay;
}

- (id)init;
- (id)performSimpleAction;

@end
