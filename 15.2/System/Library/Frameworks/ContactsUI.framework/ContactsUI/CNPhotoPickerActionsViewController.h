@class UIStackView, CNPhotoPickerActionsModel, CAShapeLayer, CNPhotoPickerActionButton, UIView, NSString;
@protocol CNPhotoPickerActionsViewControllerLayout, CNPhotoPickerActionsViewControllerDelegate;

@interface CNPhotoPickerActionsViewController : UIViewController <CNPhotoPickerActionsDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIStackView *buttonsView;
@property (retain, nonatomic) UIView *imageContainerView;
@property (retain, nonatomic) UIView *transitionContainerView;
@property (retain, nonatomic) CAShapeLayer *clippingLayer;
@property (retain, nonatomic) CNPhotoPickerActionButton *editButton;
@property (retain, nonatomic) CNPhotoPickerActionButton *duplicateButton;
@property (retain, nonatomic) CNPhotoPickerActionButton *deleteButton;
@property (retain, nonatomic) CNPhotoPickerActionsModel *actionsModel;
@property (retain, nonatomic) id<CNPhotoPickerActionsViewControllerLayout> currentLayout;
@property (weak, nonatomic) id<CNPhotoPickerActionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)applyLayout:(id)a0;
- (void)updateButtonsFromModel:(id)a0;
- (void)actionsModel:(id)a0 didEdit:(id)a1 atIndexPath:(id)a2;
- (double)deleteMoveInDuration;
- (double)deleteMoveInDelay;
- (id)initWithActionsModel:(id)a0;
- (void)layoutViewFromModel:(id)a0;
- (void)actionsModel:(id)a0 didAssignToContact:(id)a1 atIndexPath:(id)a2;
- (void)performDeleteTransitionToItem:(id)a0;
- (void)actionsModel:(id)a0 didDuplicate:(id)a1 atIndexPath:(id)a2 completionBlock:(id /* block */)a3;
- (double)duplicateScaleDelay;
- (void)actionsModel:(id)a0 didDelete:(id)a1 atIndexPath:(id)a2 withSourceView:(id)a3;
- (void)updateActionsModelWithProviderItem:(id)a0;
- (void)presentDeleteConfirmationWithSourceView:(id)a0 withCompletion:(id /* block */)a1;
- (double)duplicateScaleDuration;
- (void)performDuplicateTransitionToItem:(id)a0 fromView:(id)a1 completionBlock:(id /* block */)a2;
- (void)didTapDone;
- (void).cxx_destruct;

@end
