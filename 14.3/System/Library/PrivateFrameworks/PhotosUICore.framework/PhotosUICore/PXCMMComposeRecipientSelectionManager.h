@class PXCMMComposeRecipientSelectionSnapshot, NSMutableOrderedSet, PXCMMComposeRecipientDataSource;
@protocol PXCMMComposeRecipientSelectionManagerDelegate;

@interface PXCMMComposeRecipientSelectionManager : NSObject {
    NSMutableOrderedSet *_selectedComposeRecipients;
    NSMutableOrderedSet *_selectedRecipients;
}

@property (retain, nonatomic) PXCMMComposeRecipientSelectionSnapshot *selectionSnapshot;
@property (readonly, nonatomic) PXCMMComposeRecipientDataSource *dataSource;
@property (weak, nonatomic) id<PXCMMComposeRecipientSelectionManagerDelegate> delegate;

+ (id)new;

- (void)selectAll;
- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (void)setSelectedState:(BOOL)a0 atIndex:(long long)a1;
- (id)_setSelectedState:(BOOL)a0 forComposeRecipients:(id)a1;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)a0;

@end
