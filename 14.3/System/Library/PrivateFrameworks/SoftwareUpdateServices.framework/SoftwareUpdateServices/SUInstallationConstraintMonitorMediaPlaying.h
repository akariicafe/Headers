@class NSObject;
@protocol OS_dispatch_queue;

@interface SUInstallationConstraintMonitorMediaPlaying : SUInstallationConstraintMonitorBase {
    BOOL _queue_mediaPlaying;
    NSObject<OS_dispatch_queue> *_mediaRemoteQueue;
}

- (void)dealloc;
- (unsigned long long)unsatisfiedConstraints;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (void)_handlePlaybackChangeNotification:(id)a0;
- (void)_queue_pollSatisfied;

@end
