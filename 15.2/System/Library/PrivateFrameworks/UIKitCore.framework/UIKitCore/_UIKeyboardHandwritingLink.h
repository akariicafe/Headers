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

- (id)nextResponder;
- (unsigned long long)currentIndex;
- (id)keyboardBehaviors;
- (id)currentCandidate;
- (BOOL)isFloatingList;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)candidateOutput:(id)a0;
- (void)candidatesUpdated;
- (BOOL)isDeleteCandidate:(id)a0;
- (BOOL)shouldRestoreResponder;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (id)init;
- (void)performOutput:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (BOOL)hasCandidates;
- (BOOL)showCandidate:(id)a0;
- (void)reloadInputViews;
- (void)sendStrokes:(id)a0;
- (BOOL)becomeFirstResponder;
- (unsigned long long)selectedSortIndex;
- (void)dealloc;
- (BOOL)isExtendedList;
- (id)statisticsIdentifier;

@end
