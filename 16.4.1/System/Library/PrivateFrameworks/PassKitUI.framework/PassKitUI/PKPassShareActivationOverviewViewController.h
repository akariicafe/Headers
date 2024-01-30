@class NSString, PKPassShareActivationOptions, PKContact, UIView, PKCollapsibleHeaderView;
@protocol PKPassShareActivationOverviewViewControllerDelegate;

@interface PKPassShareActivationOverviewViewController : UIViewController <PKPassShareActivationShareActivationCodeViewDelegate, PKPassShareActivationExternalKeyEducationViewDelegate> {
    PKPassShareActivationOptions *_activationOptions;
    PKContact *_recipient;
    BOOL _isFinalScreen;
    id<PKPassShareActivationOverviewViewControllerDelegate> _delegate;
    PKCollapsibleHeaderView *_headerView;
    UIView *_contentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)closeButtonPressed;
- (void)externalKeyEdicationViewDidSelectNext:(id)a0;
- (id)initWithActivationOptions:(id)a0 recipient:(id)a1 isFinalScreen:(BOOL)a2 delegate:(id)a3;
- (void)shareActivationCodeViewDidSelectCopy:(id)a0;
- (void)shareActivationCodeViewDidSelectPhone:(id)a0;
- (void)shareActivationCodeViewDidSelectShare:(id)a0;

@end
