@class SBSystemGestureManager, UIWindow, NSString, SBFailingSystemGestureRecognizer, NSHashTable, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SBTransientUIInteractionManager : NSObject <SBSystemGestureRecognizerDelegate>

@property (retain, nonatomic) SBFailingSystemGestureRecognizer *dismissGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *unhideTapRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *unhideDoubleTapRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *indirectPanRecognizer;
@property (retain, nonatomic) NSHashTable *tapToDismissParticipants;
@property (retain, nonatomic) NSHashTable *tapToUnhideParticipants;
@property (retain, nonatomic) NSHashTable *indirectPanToParticipants;
@property (weak, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (readonly, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForSystemGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_screenWasIndirectPannedToDismiss:(id)a0;
- (void)_screenWasTappedToUnhide:(id)a0;
- (id)initWithSystemGestureManager:(id)a0;
- (void)registerParticipantForIndirectPanToDismiss:(id)a0;
- (void)registerParticipantForTapToDismiss:(id)a0;
- (void)registerParticipantForTapToUnhide:(id)a0;
- (void)unregisterParticipantForIndirectPanToDismiss:(id)a0;
- (void)unregisterParticipantForTapToDismiss:(id)a0;
- (void)unregisterParticipantForTapToUnhide:(id)a0;

@end
