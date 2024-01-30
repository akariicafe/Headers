@class NSSet, NSString, NSObject;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SUInstallationConstraintMonitorDelegate> _queue_delegate;
    unsigned long long _queue_representedConstraints;
}

@property (readonly, retain, nonatomic) NSSet *constraintMonitors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long representedConstraints;
@property (readonly, nonatomic) unsigned long long unsatisfiedConstraints;

- (void)installationConstraintMonitor:(id)a0 constraintsDidChange:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isSatisfied;
- (id)_queue_delegate;
- (void)dealloc;
- (void)_queue_setDelegate:(id)a0;
- (unsigned long long)_queue_unsatisfiedConstraints;
- (void)_queue_noteInstallationConstraintMonitor:(id)a0 constraintsDidChange:(unsigned long long)a1;
- (id)initWithInternalQueue:(id)a0 withInstallationConstraintMonitors:(id)a1;
- (void)_queue_clearDelegate;
- (unsigned long long)_queue_representedConstraints;
- (void)_queue_invalidateChildConstraintMonitors;

@end
