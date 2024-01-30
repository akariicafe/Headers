@class FPDExtension, NSString, FPItem, FPDDomain, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender> {
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    unsigned long long _numFoldersPoped;
    BOOL _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) NSString *prettyDescription;

- (void)_next;
- (void)_invalidateWithError:(id)a0;
- (void)didUpdateItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)error;
- (void)enumerationResultsDidChange;
- (void)_pushFolder:(id)a0;
- (void)_popFolder;
- (BOOL)done;
- (void)_decorateItem:(id)a0;
- (BOOL)_createEnumerator;
- (BOOL)_enumerateMoreItems;
- (id)_popItem;
- (BOOL)_shouldTraverseSubTree:(id)a0;
- (id)initWithItem:(id)a0 provider:(id)a1;
- (id)nextWithError:(id *)a0;
- (unsigned long long)numFoldersPopped;

@end
