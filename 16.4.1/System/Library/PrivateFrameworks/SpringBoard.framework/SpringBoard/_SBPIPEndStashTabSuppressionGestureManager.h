@class SBSystemGestureManager, NSString, NSMutableSet, UITapGestureRecognizer;

@interface _SBPIPEndStashTabSuppressionGestureManager : NSObject <UIGestureRecognizerDelegate> {
    NSMutableSet *_targets;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    SBSystemGestureManager *_systemGestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)_removeGestureRecognizers;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_addSystemRecognizers;
- (id)initWithSystemGestureManager:(id)a0;

@end
