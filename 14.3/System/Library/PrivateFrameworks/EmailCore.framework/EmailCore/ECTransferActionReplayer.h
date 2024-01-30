@interface ECTransferActionReplayer : ECLocalActionReplayer

- (id)replayAction;
- (id)failActionWithError:(id)a0;
- (id)_downLoadSourceMessagesInAction:(id)a0;
- (id)_appendMessagesInAction:(id)a0;
- (id)_transferItemsInAction:(id)a0 isMove:(BOOL)a1;
- (id)_deleteItemsInAction:(id)a0;
- (id)_allCopyItemsBySourceRemoteIDsForAction:(id)a0 failedItems:(id *)a1;

@end
