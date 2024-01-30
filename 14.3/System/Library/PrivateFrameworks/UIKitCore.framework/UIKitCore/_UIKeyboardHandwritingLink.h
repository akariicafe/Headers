@class TIKeyboardCandidateResultSet, NSString, UIResponder;
@protocol UIKeyboardCandidateListDelegate;

@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer> {
    UIResponder *_previousResponder;
    UIResponder *_fallbackResponder;
    id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
    long long _selectedIndex;
    BOOL _justDeleted;
}

@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyboardBehaviors;
- (id)currentCandidate;
- (BOOL)becomeFirstResponder;
- (BOOL)isExtendedList;
- (BOOL)resignFirstResponder;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)statisticsIdentifier;
- (id)nextResponder;
- (void)performOutput:(id)a0;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (unsigned long long)currentIndex;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFloatingList;
- (void)reloadInputViews;
- (BOOL)showCandidate:(id)a0;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (void)sendStrokes:(id)a0;
- (unsigned long long)selectedSortIndex;
- (void)candidateOutput:(id)a0;
- (BOOL)shouldRestoreResponder;
- (BOOL)isDeleteCandidate:(id)a0;
- (void)candidatesUpdated;
- (BOOL)hasCandidates;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;

@end
