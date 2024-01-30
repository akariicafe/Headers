@class SAUISnippet, SiriUISashItem, AceObject, NSString;
@protocol SiriUIBaseAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController>

@property (retain, nonatomic) SAUISnippet *snippet;
@property (weak, nonatomic) id<SiriUIBaseAceObjectViewControllerDelegate> delegate;
@property (readonly, nonatomic) SiriUISashItem *sashItem;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)desiredHeight;
- (BOOL)_canShowWhileLocked;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;
- (double)desiredTopPaddingBelowController:(id)a0;
- (void)siriDidReceiveAdditionalContent:(id)a0 error:(id)a1;

@end
