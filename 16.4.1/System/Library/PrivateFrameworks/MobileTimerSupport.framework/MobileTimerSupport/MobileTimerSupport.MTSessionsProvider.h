@interface MobileTimerSupport.MTSessionsProvider : NSObject {
    void /* unknown type, empty encoding */ activities;
}

+ (BOOL)supportsSessions;

- (void)finishSessionWithTimerId:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasActiveTimerSession;
- (void)updateSessionWithContext:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)restoreSessionsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)createSessionWithContext:(id)a0 completion:(id /* block */)a1;

@end
