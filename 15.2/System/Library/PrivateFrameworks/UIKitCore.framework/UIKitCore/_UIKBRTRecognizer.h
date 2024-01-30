@class NSMutableSet, NSMutableArray, NSObject;
@protocol _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerDelegate, OS_dispatch_queue, _UIKBRTRecognizerTouchPointTrackingProtocol;

@interface _UIKBRTRecognizer : NSObject {
    BOOL _isWaiting;
}

@property (nonatomic) struct CGSize { double width; double height; } clusterRestHaloSize;
@property (nonatomic) double maximumNonRestMoveDistance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *touchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableArray *touchInfos;
@property (retain, nonatomic) NSMutableSet *activeTouches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activeTouchesQueue;
@property (retain, nonatomic) NSMutableArray *ignoredTouches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ignoredTouchesQueue;
@property (nonatomic) unsigned long long numProlongedTouches;
@property (nonatomic) double touchIntervalAverage;
@property (retain, nonatomic) id<_UIKBRTRecognizerTouchLoggingProtocol> touchLogger;
@property (retain, nonatomic) id<_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker;
@property (nonatomic) id<_UIKBRTRecognizerDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *definitiveRules;
@property (readonly, nonatomic) NSMutableSet *averagingRules;
@property (nonatomic) BOOL disableHomeRowReturn;

- (void).cxx_destruct;
- (id)init;
- (void)kbStatusMessage:(id)a0;
- (void)makeTouchIgnored:(id)a0 force:(BOOL)a1;
- (void)processTouchInfo:(id)a0;
- (BOOL)queryDelegateOfIgnoringTouch:(id)a0 forOtherTouch:(BOOL)a1;
- (BOOL)makeTouchActive:(id)a0;
- (float)letRulesModifyNewTouchInfo:(id)a0;
- (void)letRulesModifyPendingTouchInfo:(id)a0;
- (void)_doBeginTouchWithTouchInfo:(id)a0;
- (BOOL)notifyDelegateOfMovedTouch:(id)a0;
- (void)notifyDelegateOfMovedIgnoredTouch:(id)a0;
- (void)_doMovedTouchWithTouchInfo:(id)a0;
- (BOOL)queryDelegateToBeginTouch:(id)a0 forBeginState:(unsigned long long)a1 restartIfNecessary:(BOOL)a2;
- (void)notifyDelegateOfCancelledTouch:(id)a0;
- (void)_doEndedTouchWithTouchInfo:(id)a0;
- (void)cancelTouchOnLayoutWithTouchInfo:(id)a0;
- (void)_doCancelledTouchWithTouchInfo:(id)a0;
- (BOOL)removedFromActiveTouches:(id)a0;
- (BOOL)addedToActiveTouches:(id)a0;
- (void)_doMarkTouchProcessedWithTouchInfo:(id)a0;
- (void)_doIgnoreTouchWithTouchInfo:(id)a0;
- (void)notifyDelegateOfSuccessfulTouch:(id)a0;
- (void)updateIgnoredTouchesForTouchInfo:(id)a0 whenTouchInfo:(id)a1 changesStateTo:(char)a2;
- (BOOL)queryDelegateOfRestingTouch:(id)a0;
- (void)notifyDelegateOfRestingTouch:(id)a0;
- (void)makeTouchIgnored:(id)a0 force:(BOOL)a1 withMessage:(id)a2;
- (void)notifyDelegateOfIgnoringTouch:(id)a0;
- (void)makeTouchIgnored:(id)a0 force:(BOOL)a1 because:(id)a2;
- (void)reset;
- (void)markTouchProcessed:(id)a0 withIdentifier:(id)a1;
- (void)explicitlyIgnoreTouch:(id)a0 withIdentifier:(id)a1;
- (void)touchUp:(id)a0 withIdentifier:(id)a1;
- (void)touchDown:(id)a0 withIdentifier:(id)a1 canLogTouch:(BOOL)a2;
- (void)touchDragged:(id)a0 withIdentifier:(id)a1;
- (void)touchCancelled:(id)a0 withIdentifier:(id)a1;
- (void)setStandardKeyPixelSize:(struct CGSize { double x0; double x1; })a0;

@end
