@class UIStackView, NSArray, UIImageView, UILabel, ATXProactiveSuggestion, MTVisualStylingProvider;
@protocol APUISuggestionsWidgetViewDelegate;

@interface APUISuggestionView : UIView {
    MTVisualStylingProvider *_reasonStylingProvider;
}

@property (nonatomic) unsigned long long platterSize;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *appImageView;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) ATXProactiveSuggestion *suggestion;
@property (nonatomic) BOOL canEngageSuggestion;
@property (weak, nonatomic) id<APUISuggestionsWidgetViewDelegate> delegate;

- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)createViewsIfNeeded;
- (void)installReasonLabelIfNecessary;
- (void)layoutSuggestion:(id)a0;
- (void)_updateReasonStylingProvider;
- (void)_updateMaximumNumberOfLines;
- (int)_titleNumberOfLines;
- (int)_subtitleNumberOfLines;

@end
