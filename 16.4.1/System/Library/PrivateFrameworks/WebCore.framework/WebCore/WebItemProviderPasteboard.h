@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard> {
    struct RetainPtr<NSArray> { void *m_ptr; } _itemProviders;
    struct RetainPtr<NSArray> { void *m_ptr; } _supportedTypeIdentifiers;
    struct RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>> { void *m_ptr; } _stagedRegistrationInfoLists;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _loadResults;
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

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (id)pasteboardTypes;
- (id)dataForPasteboardType:(id)a0;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (void)decrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)a0;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(id /* block */)a0 synchronousTimeout:(double)a1;
- (void)incrementPendingOperationCount;
- (id)takeRegistrationLists;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (void)updateSupportedTypeIdentifiers:(id)a0;
- (id)_preLoadedDataConformingToType:(id)a0 forItemProviderAtIndex:(unsigned long long)a1;
- (void)clearRegistrationLists;
- (void)enumerateItemProvidersWithBlock:(id /* block */)a0;
- (id)fileUploadURLsAtIndex:(unsigned long long)a0 fileTypes:(id *)a1;
- (id)itemProviderAtIndex:(unsigned long long)a0;
- (void)stageRegistrationLists:(id)a0;
- (id)typeIdentifiersToLoad:(id)a0;

@end
