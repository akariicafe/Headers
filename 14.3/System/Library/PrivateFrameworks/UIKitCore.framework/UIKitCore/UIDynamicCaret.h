@class _UIDynamicCaretNoContentView, _UIDynamicCaretInput, _UIDynamicCaretHelpLabel, NSString, TIKeyboardCandidateResultSet, _UIDynamicCaretAlternatives;
@protocol UIKeyboardCandidateListDelegate;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    BOOL _justDeleted;
}

@property (retain, nonatomic) _UIDynamicCaretInput *inputView;
@property (retain, nonatomic) _UIDynamicCaretAlternatives *alternativesView;
@property (retain, nonatomic) _UIDynamicCaretNoContentView *noContentView;
@property (retain, nonatomic) _UIDynamicCaretHelpLabel *helpLabel;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyboardBehaviors;
- (id)currentCandidate;
- (BOOL)isExtendedList;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)statisticsIdentifier;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (unsigned long long)currentIndex;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)layoutSubviews;
- (id)backgroundImage;
- (BOOL)isFloatingList;
- (BOOL)showCandidate:(id)a0;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (unsigned long long)selectedSortIndex;
- (BOOL)isDeleteCandidate:(id)a0;
- (BOOL)hasCandidates;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)displayAlternatives:(BOOL)a0;
- (void)setDocumentHasContent:(BOOL)a0;
- (void)alternativeTappedAtIndex:(long long)a0;

@end
