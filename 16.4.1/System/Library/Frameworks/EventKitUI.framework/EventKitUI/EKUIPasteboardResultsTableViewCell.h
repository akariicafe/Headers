@class NSArray, UILabel, NSMutableArray, NSAttributedString;

@interface EKUIPasteboardResultsTableViewCell : EKUIAutocompleteSearchResultCell {
    UILabel *_aggregateTextLabel;
    NSMutableArray *_colorDotViews;
    NSMutableArray *_titleTextLabels;
    UILabel *_xMoreLabel;
    NSAttributedString *_aggregateTitle;
    NSMutableArray *_eventCalendarColors;
    NSMutableArray *_eventTitles;
    NSArray *_cellConstraints;
}

+ (id)reuseIdentifier;
+ (id)_aggregateTitleStringForAggregateResult:(id)a0;
+ (id)_titleStringForResult:(id)a0;
+ (double)cellHeightForResult:(id)a0 forWidth:(double)a1;

- (void)updateWithResult:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setLabelFonts;

@end
