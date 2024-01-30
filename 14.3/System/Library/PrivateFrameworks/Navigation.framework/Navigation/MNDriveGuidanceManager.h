@interface MNDriveGuidanceManager : MNClassicGuidanceManager {
    int _currentContinuePhase;
}

- (int)transportType;
- (void)_resetStepState;
- (id)_nameInfoForContinueSign;
- (void)_updatePrepareForNextStep;
- (BOOL)_updateConsiderContinueAnnouncement:(id)a0 location:(id)a1;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)a0 location:(id)a1;
- (BOOL)_updateConsiderPrepareAnnouncement:(id)a0 withMatch:(id)a1;
- (double)_distanceForSign;
- (int)_continuePhase;
- (const struct { double x0; double x1; double x2; } *)_announceSettings;

@end
