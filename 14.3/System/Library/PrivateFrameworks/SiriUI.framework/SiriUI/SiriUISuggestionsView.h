@class NSTimer, UIView, NSArray, SiriUISuggestionsHeaderText, SiriUIAcousticIDSpinner, NSMutableOrderedSet, UILabel, UIColor;
@protocol SiriUISuggestionsViewDelegate;

@interface SiriUISuggestionsView : UIView {
    UIView *_contentView;
    UILabel *_headerLabel;
    UILabel *_oldHeaderLabel;
    UILabel *_subheaderLabel;
    UILabel *_largeSubheaderLabel;
    NSArray *_suggestionLabels;
    NSArray *_oldSuggestionLabels;
    BOOL _firstSuggestionPresentation;
    NSTimer *_updateSuggestionsTimer;
    NSMutableOrderedSet *_pendedSuggestions;
    SiriUIAcousticIDSpinner *_acousticIDSpinner;
    unsigned long long _numberOfSuggestions;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _edgeInsets;
}

@property (retain, nonatomic) UIView *guideView;
@property (nonatomic, getter=isGuideHidden) BOOL guideHidden;
@property (copy, nonatomic) SiriUISuggestionsHeaderText *headerText;
@property (copy, nonatomic) SiriUISuggestionsHeaderText *subheaderText;
@property (copy, nonatomic) SiriUISuggestionsHeaderText *largeSubheaderText;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (weak, nonatomic) id<SiriUISuggestionsViewDelegate> delegate;
@property (nonatomic) long long orientation;

- (BOOL)_isPortrait;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)stopSuggesting;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (void)_updateSuggestions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)acousticIDSpinnerDidHide:(id)a0;
- (double)_suggestionFontSize;
- (void)_setHeaderText:(id)a0;
- (void)_setSubheaderText:(id)a0;
- (double)_headerToSubheaderOffset;
- (double)_headerToLargeSubheaderOffset;
- (double)_suggestionSpacing;
- (id)_createSpringAnimation:(double)a0;
- (double)_updateSuggestionsDelay;
- (void)setGuideHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_animateHeaderOut;
- (void)_animateHeaderIn;
- (void)_loadSubheaderViewIfNeeded;
- (void)_setLargeSubheaderText:(id)a0;
- (void)_loadLargeSubheaderViewIfNeeded;
- (void)_loadSuggestionsViewsIfNeeded;
- (void)_animateOutSuggestionAtIndex:(unsigned long long)a0;
- (void)_animateInSuggestionAtIndex:(unsigned long long)a0;
- (void)_setSuggestionTexts:(id)a0;
- (void)clearCurrentSuggestions;
- (void)_reallyShowAcousticIDSpinner;
- (unsigned long long)_numberOfSuggestionsToDisplay;
- (int)_heightType;
- (BOOL)_isPadHeightType;
- (void)startSuggesting;
- (BOOL)isShowingSuggestions;
- (void)showAcousticIDSpinner;
- (void)hideAcousticIDSpinner;

@end
