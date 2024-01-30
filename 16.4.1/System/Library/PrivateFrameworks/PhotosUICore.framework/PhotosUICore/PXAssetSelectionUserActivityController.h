@class PXSectionedSelectionManager, PXSelectionSnapshot, NSUserActivity, NSString;

@interface PXAssetSelectionUserActivityController : NSObject <PXChangeObserver, NSUserActivityDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _snapshotLock;
}

@property (retain, nonatomic) NSUserActivity *currentUserActivity;
@property (nonatomic) BOOL hasSelection;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userActivityWillSave:(id)a0;
- (void)_updateActivity;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (id)initWithSelectionManager:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
