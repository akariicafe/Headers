@class NSString, IMAPAccount, NSFileHandle, NSMutableArray;

@interface MFIMAPOperationCache : NSObject <MFIMAPConnectionDelegate> {
    IMAPAccount *_account;
    NSFileHandle *_handle;
    NSMutableArray *_ops;
    unsigned int _lastUid;
    unsigned int _lastSave;
    unsigned int _lastUidValidity;
    BOOL _opsPending;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setShouldFlattenCacheOperations:(BOOL)a0;

- (void)dealloc;
- (id)account;
- (void)deleteMailbox:(id)a0;
- (void)saveChanges;
- (void)createMailbox:(id)a0;
- (id)initWithIMAPAccount:(id)a0;
- (BOOL)hasPendingOfflineOperations;
- (BOOL)connection:(id)a0 shouldHandleUntaggedResponse:(id)a1 forCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a2;
- (void)performDeferredOperationsWithConnection:(id)a0;
- (void)_queueDeferredOperation:(id)a0;
- (void)expungeTemporaryUid:(unsigned int)a0;
- (void)_performCreateOperation:(id)a0 withContext:(struct { id x0; id x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned int x5; unsigned int x6; int x7; id x8; } *)a1;
- (void)_performDeleteOperation:(id)a0 withContext:(struct { id x0; id x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned int x5; unsigned int x6; int x7; id x8; } *)a1;
- (void)_performStoreOperation:(id)a0 withContext:(struct { id x0; id x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned int x5; unsigned int x6; int x7; id x8; } *)a1;
- (void)_performAppendOperation:(id)a0 withContext:(struct { id x0; id x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned int x5; unsigned int x6; int x7; id x8; } *)a1;
- (void)_performCopyOperation:(id)a0 withContext:(struct { id x0; id x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; unsigned int x5; unsigned int x6; int x7; id x8; } *)a1;
- (void)setFlags:(id)a0 andClearFlags:(id)a1 forMessages:(id)a2;
- (unsigned int)firstUidForCopyingMessages:(id)a0 fromMailbox:(id)a1 toMailbox:(id)a2;
- (unsigned int)uidForAppendingMessageData:(id)a0 withFlags:(id)a1 andInternalDate:(id)a2 toMailbox:(id)a3;
- (BOOL)hasOperationsForMailbox:(id)a0;
- (id)deferredOperations;
- (void)setFlags:(id)a0 andClearFlags:(id)a1 forUids:(id)a2 forMailbox:(id)a3;

@end
