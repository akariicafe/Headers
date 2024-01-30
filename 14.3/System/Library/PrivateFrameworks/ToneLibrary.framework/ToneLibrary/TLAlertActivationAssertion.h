@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)relinquish;
- (id)description;
- (void)_acquire;
- (void)acquire;
- (void)_relinquish;
- (id)initWithAlert:(id)a0;

@end
