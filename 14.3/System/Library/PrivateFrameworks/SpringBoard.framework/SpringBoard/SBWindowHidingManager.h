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

- (void)_releaseWindow:(id)a0;
- (void)sceneHandle:(id)a0 didUpdateSettingsWithDiff:(id)a1 previousSettings:(id)a2;
- (id)init;
- (void)startHidingWindowsExclusivelyFromLevel:(double)a0 toLevel:(double)a1 forContext:(id)a2 reason:(id)a3;
- (void).cxx_destruct;
- (void)_adjustWindowsForActiveHideRange;
- (BOOL)_isHidingWindowLevel:(double)a0;
- (id)dumpKnownWindows;
- (BOOL)_isHidingWindows;
- (id)dumpHidingState;
- (void)stopHidingWindowsForContext:(id)a0;
- (void)_takeNoteOfWindow:(id)a0 onScreen:(id)a1;
- (void)setAlpha:(double)a0 forWindow:(id)a1;
- (void)_captureWindow:(id)a0;
- (void)_recomputeHideRangeAndAdjustWindows;

@end
