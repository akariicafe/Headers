@class NSString, NSMapTable, SUDownload;
@protocol SUInstallationConstraintObserverDelegate;

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable> {
    id<SUInstallationConstraintObserverDelegate> _delegate;
    NSMapTable *_queue_observerBlockTokens;
    BOOL _queue_invalidated;
    unsigned long long _queue_tokenCount;
}

@property (nonatomic) id<SUInstallationConstraintObserverDelegate> delegate;
@property (readonly, retain, nonatomic) SUDownload *download;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDownload:(id)a0;
- (void)invalidateWithError:(id)a0;
- (void)invalidate;
- (void)_queue_noteInstallationConstraintMonitor:(id)a0 constraintsDidChange:(unsigned long long)a1;
- (void)_removeToken:(id)a0;
- (id)initWithDownload:(id)a0 queue:(id)a1 constraints:(id)a2;
- (id)registerObserverBlock:(id /* block */)a0;
- (id)monitorOfClass:(Class)a0;
- (BOOL)_hasAnyBlockObservers;

@end
