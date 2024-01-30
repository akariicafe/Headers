@class NSMutableDictionary;

@interface WBSTabDialogManager : NSObject {
    NSMutableDictionary *_webProcessIDToDialogSetMapping;
    NSMutableDictionary *_tabIDToDialogQueueMapping;
    unsigned long long _queueCapacity;
}

- (id)init;
- (void).cxx_destruct;
- (void)_cancelDialogsInQueue:(id)a0 tabID:(unsigned long long)a1 context:(id)a2;
- (void)cancelAllDialogsBlockingSlot:(struct { int x0; unsigned long long x1; })a0;
- (void)cancelAllDialogsForTabID:(unsigned long long)a0 reason:(id)a1;
- (id)_queueForTabID:(unsigned long long)a0 createIfNeeded:(BOOL)a1;
- (void)enqueueOrPresentDialogInSlot:(struct { int x0; unsigned long long x1; })a0 presentationBlock:(id /* block */)a1 dismissalBlock:(id /* block */)a2 blocksWebProcessUntilDismissed:(BOOL)a3;
- (id)_dialogBlockingWebProcessID:(int)a0;
- (long long)_enqueueDialog:(id)a0;
- (void)_dismissDialog:(id)a0 withResponse:(id)a1;
- (void)cancelAllDialogsForTabID:(unsigned long long)a0;
- (id)description;
- (void)dismissCurrentDialogForTabID:(unsigned long long)a0 withResponse:(id)a1;
- (void)presentNextDialogForSlot:(struct { int x0; unsigned long long x1; })a0;
- (void)cancelAllDialogsForTabID:(unsigned long long)a0 context:(id)a1;
- (id)_setForWebProcessID:(int)a0 createIfNeeded:(BOOL)a1;
- (id)_dialogBlockingSlot:(struct { int x0; unsigned long long x1; })a0;
- (void)cancelAllDialogsBlockingWebProcessID:(int)a0;
- (void)enqueueOrPresentDialog:(id)a0 inSlot:(struct { int x0; unsigned long long x1; })a1;
- (void)cancelAllDialogsWithContext:(id)a0;

@end
