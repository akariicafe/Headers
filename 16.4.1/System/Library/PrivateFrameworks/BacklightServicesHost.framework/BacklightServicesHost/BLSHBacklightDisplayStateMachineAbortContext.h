@class NSString;

@interface BLSHBacklightDisplayStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    long long _displayMode;
    long long _transitioningToDisplayMode;
    long long _lastSteadyStateDisplayMode;
    long long _backlightFactor;
    BOOL _isFlipbookEnabled;
    BOOL _showingBlankingWindow;
    BOOL _isCABlanked;
    BOOL _displayIsOff;
    BOOL _sleepRequested;
    BOOL _sleepImminent;
    double _timeInSleepImminent;
}

@property (readonly, nonatomic) unsigned long long abortReason;
@property (readonly, nonatomic) const void *payload;
@property (readonly, nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) BOOL hasEnsureFlipbookCurrent;
@property (readonly, copy, nonatomic) NSString *abortReasonString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_populatePayload;
- (id)initWithDisplayMode:(long long)a0 transitioningToDisplayMode:(long long)a1 lastSteadyStateDisplayMode:(long long)a2 isFlipbookEnabled:(BOOL)a3 showingBlankingWindow:(BOOL)a4 backlightFactor:(long long)a5 isCABlanked:(BOOL)a6 displayIsOff:(BOOL)a7 sleepRequested:(BOOL)a8 sleepImminent:(BOOL)a9 timeInSleepImminent:(double)a10 hasEnsureFlipbookCurrent:(BOOL)a11;
- (void)setSleepImminentAbortReason;

@end
