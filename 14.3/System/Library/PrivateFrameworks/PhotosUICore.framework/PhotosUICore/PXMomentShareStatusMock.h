@class _PXMomentShareMockMomentShare;
@protocol PXDisplayMomentShare;

@interface PXMomentShareStatusMock : PXMomentShareStatus {
    id<PXDisplayMomentShare> _originalMomentShare;
    _PXMomentShareMockMomentShare *_mockMomentShare;
}

@property (class, readonly) BOOL shouldUseMockStatus;

- (void).cxx_destruct;
- (id)owner;
- (void)dealloc;
- (void)_updateStatus;
- (id)_actionManager;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithMomentShare:(id)a0;

@end
