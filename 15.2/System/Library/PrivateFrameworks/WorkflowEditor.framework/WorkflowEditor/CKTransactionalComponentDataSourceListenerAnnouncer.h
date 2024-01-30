@interface CKTransactionalComponentDataSourceListenerAnnouncer : CKComponentAnnouncerBase <CKTransactionalComponentDataSourceListener>

- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)transactionalComponentDataSource:(id)a0 didModifyPreviousState:(id)a1 byApplyingChanges:(id)a2;

@end
