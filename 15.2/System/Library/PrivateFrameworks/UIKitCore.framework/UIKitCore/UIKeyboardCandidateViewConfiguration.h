@class UIColor;

@interface UIKeyboardCandidateViewConfiguration : NSObject

@property (readonly, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) BOOL darkKeyboard;
@property (readonly, nonatomic) unsigned long long rowsToExtend;
@property (readonly, nonatomic) unsigned long long maxNumberOfProactiveCandidates;
@property (readonly, nonatomic) BOOL shouldResizeKeyboardBackdrop;
@property (readonly, nonatomic) BOOL shouldAlwaysShowSortControl;
@property (readonly, nonatomic) BOOL shouldAnimateStateTransition;
@property (readonly, nonatomic) BOOL shouldUsePredictionViewSecureRenderTraits;
@property (readonly, nonatomic) BOOL willCoverKeyboardLayout;
@property (readonly, nonatomic) BOOL allowsPullDownGesture;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredInlineFloatingViewSize;
@property (readonly, nonatomic) int inlineFloatingViewAdjustMode;

+ (id)configuration;

- (id)initialState;
- (id)extendedState;
- (id)extendedScrolledState;
- (BOOL)usesReducedFontSize;
- (double)candidateDefaultFontSize;
- (id)candidateFontWithSize:(double)a0;
- (id)candidateFontWithSize:(double)a0 language:(id)a1;

@end
