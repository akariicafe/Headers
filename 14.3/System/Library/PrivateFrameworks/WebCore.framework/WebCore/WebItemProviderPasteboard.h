@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard> {
    struct RetainPtr<NSArray> { void *m_ptr; } _itemProviders;
    struct RetainPtr<NSArray> { void *m_ptr; } _supportedTypeIdentifiers;
    struct RetainPtr<NSArray<WebItemProviderRegistrationInfoList *> > { void *m_ptr; } _stagedRegistrationInfoLists;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RetainPtr<WebItemProviderLoadResult> *m_buffer; unsigned int m_capacity; unsigned int m_size; } _loadResults;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long changeCount;
@property (nonatomic) long long pendingOperationCount;
@property (copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) NSArray *allDroppedFileURLs;
@property (readonly, nonatomic) BOOL hasPendingOperation;
@property (readonly, nonatomic) long long numberOfFiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)typeIdentifiersToLoad:(id)a0;
- (id)_preLoadedDataConformingToType:(id)a0 forItemProviderAtIndex:(unsigned long long)a1;
- (id)itemProviderAtIndex:(unsigned long long)a0;
- (void)decrementPendingOperationCount;
- (void)incrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)a0;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)a0 synchronousTimeout:(double)a1;
- (id)init;
- (void)enumerateItemProvidersWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clearRegistrationLists;
- (void)stageRegistrationLists:(id)a0;
- (id)dataForPasteboardType:(id)a0;
- (id)pasteboardTypes;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id).cxx_construct;
- (id)fileUploadURLsAtIndex:(unsigned long long)a0 fileTypes:(id *)a1;
- (void)updateSupportedTypeIdentifiers:(id)a0;
- (id)takeRegistrationLists;

@end
