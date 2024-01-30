@interface MSSenderBlockingTriageAction : MSTriageAction {
    BOOL _blockSender;
}

- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1 blockSender:(BOOL)a2;

@end
