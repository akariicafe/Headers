@interface PXCMMInvitationsDataSource : PXSectionedDataSource

- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)invitationForObjectID:(id)a0;

@end
