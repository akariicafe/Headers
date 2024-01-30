@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void)acquire;
- (void)relinquish;
- (id)description;
- (void).cxx_destruct;
- (void)_acquire;
- (void)dealloc;
- (void)_relinquish;
- (id)initWithAlert:(id)a0;

@end
