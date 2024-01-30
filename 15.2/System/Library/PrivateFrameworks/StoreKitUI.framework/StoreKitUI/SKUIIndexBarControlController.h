@class NSString, NSMapTable, SKUIResourceLoader, SKUIIndexBarControl, SKUIIndexBarEntryDescriptor;
@protocol SKUIIndexBarControlControllerDelegate, SKUIIndexBarControlControllerDataSource;

@interface SKUIIndexBarControlController : NSObject <SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate> {
    SKUIIndexBarEntryDescriptor *_combinedEntryDescriptor;
    NSMapTable *_entryDescriptorToCachedEntry;
    BOOL _hasValidCombinedEntryDescriptor;
    NSMapTable *_indexPathToEntryDescriptor;
    NSMapTable *_requestIDToDescriptors;
    struct { unsigned char dataSourceRespondsToCombinedEntry : 1; unsigned char dataSourceRespondsToNumberOfSections : 1; unsigned char delegateRespondsToDidSelectEntryAtIndexPath : 1; unsigned char delegateRespondsToDidSelectBeyondBottom : 1; unsigned char delegateRespondsToDidSelectBeyondTop : 1; } _dataSourceDelegateFlags;
}

@property (weak, nonatomic) id<SKUIIndexBarControlControllerDataSource> dataSource;
@property (weak, nonatomic) id<SKUIIndexBarControlControllerDelegate> delegate;
@property (readonly, nonatomic) SKUIIndexBarControl *indexBarControl;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)reloadSections:(id)a0;
- (id)initWithIndexBarControl:(id)a0;
- (void)_artworkRequestDidLoadImageNotification:(id)a0;
- (void)_cancelLoadForEntryDescriptors:(id)a0;
- (id)_combinedEntryDescriptor;
- (id)_entryForEntryDescriptor:(id)a0 loadingIfNeeded:(BOOL)a1;
- (id)_entryDescriptorAtIndexPath:(id)a0;
- (void)_finishLoadForRequestID:(id)a0 withResultingImage:(id)a1;
- (id)_URLForEntryDescriptor:(id)a0;
- (void)_configureEntry:(id)a0 withEntryDescriptor:(id)a1;
- (id)_cachedEntryForEntryDescriptor:(id)a0;
- (id)_placeholderEntryForEntryDescriptor:(id)a0;
- (void)_loadEntryForEntryDescriptor:(id)a0;
- (void)_updateCachedEntry:(id)a0 forEntryDescriptor:(id)a1;
- (long long)indexBarControl:(id)a0 numberOfEntriesInSection:(long long)a1;
- (id)indexBarControl:(id)a0 entryAtIndexPath:(id)a1;
- (id)combinedEntryForIndexBarControl:(id)a0;
- (long long)numberOfSectionsInIndexBarControl:(id)a0;
- (void)indexBarControl:(id)a0 didSelectEntryAtIndexPath:(id)a1;
- (void)indexBarControlDidSelectBeyondBottom:(id)a0;
- (void)indexBarControlDidSelectBeyondTop:(id)a0;
- (void)reloadCombinedEntryDescriptor;
- (void)reloadEntryDescriptorAtIndexPath:(id)a0;

@end
