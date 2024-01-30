@class NSString, NSMapTable, SBSceneHandle;
@protocol UIScenePresenter;

@interface SBWindowHidingManager : NSObject <SBSceneHandleObserver> {
    NSMapTable *_windowStateMap;
    NSMapTable *_hidingContextMap;
    SBSceneHandle *_keyboardSceneHandle;
    struct SBWindowLevelRange_struct { double start; double end; } _hideRange;
    id<UIScenePresenter> _keyboardPresenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)start;

- (void)stopHidingWindowsForContext:(id)a0;
- (void)_captureWindow:(id)a0;
- (void)_releaseWindow:(id)a0;
- (id)dumpHidingState;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (void)_adjustWindowsForActiveHideRange;
- (void)_recomputeHideRangeAndAdjustWindows;
- (void).cxx_destruct;
- (id)init;
- (void)setAlpha:(double)a0 forWindow:(id)a1;
- (id)dumpKnownWindows;
- (void)startHidingWindowsExclusivelyFromLevel:(double)a0 toLevel:(double)a1 forContext:(id)a2 reason:(id)a3;
- (void)_takeNoteOfWindow:(id)a0 onScreen:(id)a1;
- (BOOL)_isHidingWindows;
- (BOOL)_isHidingWindowLevel:(double)a0;

@end
