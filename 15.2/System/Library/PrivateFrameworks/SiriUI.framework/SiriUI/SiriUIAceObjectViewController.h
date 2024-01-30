@class AceObject, NSString;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController>

@property (retain, nonatomic) AceObject *aceObject;
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (double)desiredHeight;
- (void).cxx_destruct;
- (id)_privateDelegate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;
- (BOOL)removedAfterDialogProgresses;
- (void)_setVirgin:(BOOL)a0;
- (long long)_pinAnimationType;
- (long long)_insertionAnimation;
- (long long)_replacementAnimation;
- (double)_insertionAnimatedZPosition;
- (void)_aceObjectViewControllerWillBeRemoved;
- (BOOL)_shouldSkipAnimationsInAlternateSpeeds;

@end
