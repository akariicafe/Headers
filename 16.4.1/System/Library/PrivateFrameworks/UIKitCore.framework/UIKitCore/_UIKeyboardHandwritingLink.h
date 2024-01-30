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

- (unsigned long long)currentIndex;
- (BOOL)becomeFirstResponder;
- (BOOL)isExtendedList;
- (id)nextResponder;
- (id)keyboardBehaviors;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)statisticsIdentifier;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (BOOL)showCandidate:(id)a0;
- (unsigned long long)selectedSortIndex;
- (BOOL)resignFirstResponder;
- (id)init;
- (BOOL)isFloatingList;
- (BOOL)hasCandidates;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (void).cxx_destruct;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (id)currentCandidate;
- (void)candidateOutput:(id)a0;
- (void)candidatesUpdated;
- (BOOL)isDeleteCandidate:(id)a0;
- (void)performOutput:(id)a0;
- (void)reloadInputViews;
- (void)sendStrokes:(id)a0;
- (BOOL)shouldRestoreResponder;

@end
