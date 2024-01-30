@class CACCorrectionsCandidateState, TIKeyboardCandidateSingle, NSArray, NSString, UILabel, UIView, TUICandidateView;
@protocol CACCCorrectionsCandidatesViewControllerDelegate;

@interface CACCorrectionsCandidatesViewController : UIViewController <TUICandidateViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TUICandidateView *candidateView;
@property (retain, nonatomic) TUICandidateView *secondaryCandidateView;
@property (retain, nonatomic) UIView *candidateBackdropView;
@property (retain, nonatomic) CACCorrectionsCandidateState *candidateConfiguration;
@property (retain, nonatomic) TIKeyboardCandidateSingle *originalTextCandidate;
@property (retain, nonatomic) NSArray *allCandidates;
@property (weak, nonatomic) id<CACCCorrectionsCandidatesViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfigurations;
- (void)candidateViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (void)candidateViewDidTapArrowButton:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)closeButtonTapped;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)candidateView:(id)a0 didAcceptCandidate:(id)a1 atIndexPath:(id)a2 inGridType:(long long)a3;
- (id)candidateResultSet;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)candidateViewNeedsToExpand:(id)a0;
- (void)candidateViewSelectionDidChange:(id)a0 inGridType:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)setupConfigurations;
- (id)newCandidateKeyWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCandidateSet;

@end
