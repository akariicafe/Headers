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

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)actionsModel:(id)a0 didAssignToContact:(id)a1 atIndexPath:(id)a2;
- (void)actionsModel:(id)a0 didDelete:(id)a1 atIndexPath:(id)a2 withSourceView:(id)a3;
- (void)actionsModel:(id)a0 didDuplicate:(id)a1 atIndexPath:(id)a2 completionBlock:(id /* block */)a3;
- (void)actionsModel:(id)a0 didEdit:(id)a1 atIndexPath:(id)a2;
- (void)applyLayout:(id)a0;
- (double)deleteMoveInDelay;
- (double)deleteMoveInDuration;
- (void)didTapDone;
- (double)duplicateScaleDelay;
- (double)duplicateScaleDuration;
- (id)initWithActionsModel:(id)a0;
- (void)layoutViewFromModel:(id)a0;
- (void)performDeleteTransitionToItem:(id)a0;
- (void)performDuplicateTransitionToItem:(id)a0 fromView:(id)a1 completionBlock:(id /* block */)a2;
- (void)presentDeleteConfirmationWithSourceView:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateActionsModelWithProviderItem:(id)a0;
- (void)updateButtonsFromModel:(id)a0;

@end
