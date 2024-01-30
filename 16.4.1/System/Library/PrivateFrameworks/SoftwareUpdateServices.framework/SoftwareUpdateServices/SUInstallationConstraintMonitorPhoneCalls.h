@class TUCallCenter;

@interface SUInstallationConstraintMonitorPhoneCalls : SUInstallationConstraintMonitorBase {
    TUCallCenter *_queue_callCenter;
    BOOL _queue_satisfied;
    BOOL _inSpringBoard;
}

- (void)dealloc;
- (void)_callStatusChanged;
- (void)_queue_noteOnExistingPhoneCallDidChange:(BOOL)a0;
- (id)initOnQueue:(id)a0 withDownload:(id)a1;
- (id)initOnQueue:(id)a0 withDownload:(id)a1 callCenter:(id)a2 inSpringBoard:(BOOL)a3 onExistingPhoneCall:(BOOL)a4;
- (unsigned long long)unsatisfiedConstraints;

@end
