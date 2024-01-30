@class NSString, NSMutableSet, UITapGestureRecognizer;

@interface _SBPIPEndStashTabSuppressionGestureManager : NSObject <UIGestureRecognizerDelegate> {
    NSMutableSet *_targets;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addTarget:(id)a0;
- (void).cxx_destruct;
- (void)_removeGestureRecognizers;
- (void)removeTarget:(id)a0;
- (void)_addSystemRecognizers;

@end
