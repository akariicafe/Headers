@class EMMailbox, ECMessageFlagChange;

@interface MSMoveTriageAction : MSTriageAction {
    EMMailbox *_destinationMailbox;
    long long _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    BOOL _copyMessages;
}

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1 destinationMailbox:(id)a2 flagChange:(id)a3 copyMessages:(BOOL)a4;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1 destinationMailboxType:(long long)a2 flagChange:(id)a3 copyMessages:(BOOL)a4;

@end
