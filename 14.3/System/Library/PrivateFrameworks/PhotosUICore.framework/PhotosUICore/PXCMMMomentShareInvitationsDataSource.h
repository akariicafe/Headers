@class PXCMMMomentShareInvitationsDataSourceState;

@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource

@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSourceState *state;

+ (id)new;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)initWithState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)invitationForObjectID:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
