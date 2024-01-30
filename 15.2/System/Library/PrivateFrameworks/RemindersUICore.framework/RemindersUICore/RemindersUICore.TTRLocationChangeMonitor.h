@interface RemindersUICore.TTRLocationChangeMonitor : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationChange;
    void /* unknown type, empty encoding */ lastResult;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ timerInterval;
    void /* unknown type, empty encoding */ hasStarted;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ locationChangePassthroughSubject;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)timerFired;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
