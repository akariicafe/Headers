@class AceObject, NSUUID, NSString;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIAceObjectViewController : UIViewController <SiriSharedUIViewControlling, SiriUIViewController>

@property (retain, nonatomic) AceObject *aceObject;
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (id)_privateDelegate;
- (void).cxx_destruct;
- (double)desiredHeight;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)_aceObjectViewControllerWillBeRemoved;
- (double)_insertionAnimatedZPosition;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (long long)_replacementAnimation;
- (void)_setVirgin:(BOOL)a0;
- (BOOL)_shouldSkipAnimationsInAlternateSpeeds;
- (BOOL)removedAfterDialogProgresses;

@end
