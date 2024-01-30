@class NSString;
@protocol PXSurveyQuestionsHorizontalGadgetDelegate;

@interface PXSurveyQuestionsHorizontalGadget : PXHorizontalCollectionGadget <MFMailComposeViewControllerDelegate>

@property (weak, nonatomic) id<PXSurveyQuestionsHorizontalGadgetDelegate> horizontalGadgetDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)headerStyle;
- (id)accessoryButtonTitle;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (unsigned long long)accessoryButtonType;
- (BOOL)selectionFollowsFocus;
- (id /* block */)accessoryButtonAction;
- (void)_hideAccessoryButtonAction;
- (void)_infoAccessoryButtonAction;
- (void)_hideSurveyQuestionsUntilDate:(id)a0;
- (void)_sendRequestConsentFormMail;

@end
