@class PXSectionedSelectionManager, PXInfoUpdater, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PXAssetSelectionTypeCounter : PXObservable <PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver> {
    NSObject<OS_dispatch_queue> *_countUpdateQueue;
}

@property (readonly, nonatomic) PXInfoUpdater *infoUpdater;
@property (nonatomic) struct { unsigned long long count; long long type; } typedCount;
@property (readonly, weak, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectionSnapshot;
- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)priorityForInfoRequestOfKind:(id)a0;
- (id)initWithSelectionManager:(id)a0;
- (void)infoUpdaterDidUpdate:(id)a0;
- (id)requestInfoOfKind:(id)a0 withResultHandler:(id /* block */)a1;

@end
