@class NSObject, SUDownload;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUInstallationConstraintMonitorBase : NSObject <SUInstallationConstraintMonitor> {
    NSObject<OS_dispatch_queue> *_queue;
    SUDownload *_download;
    unsigned long long _representedConstraints;
    id<SUInstallationConstraintMonitorDelegate> _queue_delegate;
}

@property (readonly, retain, nonatomic) SUDownload *download;
@property (nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long representedConstraints;
@property (readonly, nonatomic) unsigned long long unsatisfiedConstraints;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isSatisfied;
- (id)initOnQueue:(id)a0 withRepresentedInstallationConstraints:(unsigned long long)a1 andDownload:(id)a2;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;

@end
