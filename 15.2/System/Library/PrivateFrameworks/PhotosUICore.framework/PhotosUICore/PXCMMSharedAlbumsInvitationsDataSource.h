@class PXCMMSharedAlbumsInvitationsDataSourceState;

@interface PXCMMSharedAlbumsInvitationsDataSource : PXCMMInvitationsDataSource

@property (readonly, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state;

- (id)initWithState:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)invitationForObjectID:(id)a0;

@end
