@class NSString, TSWPSelection, TSWPChangeSession;

@interface TSWPTrackedInsertion : NSObject <TSWPReplaceAction> {
    TSWPSelection *_selection;
    NSString *_string;
    TSWPChangeSession *_changeSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)delta;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })insertedRange;
- (void)performWithStorage:(id)a0 delta:(long long)a1 undoTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject *x0; struct TSWPStorageTransactionObject *x1; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject *x0; } x2; } x0; unsigned long long x1; unsigned long long x2; } *)a2 replaceBlock:(id /* block */)a3;
- (unsigned long long)targetCharIndex;
- (id)initWithSelection:(id)a0 string:(id)a1 changeSession:(id)a2;

@end
