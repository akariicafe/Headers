@class PUSearchResultsIndexingProgressView, NSString, UILabel, NSLayoutConstraint, UIButton;
@protocol PUSearchResultsFooterViewDelegate;

@interface PUSearchResultsFooterView : UIView <PXSettingsKeyObserver>

@property (retain, nonatomic) UILabel *noResultsLabel;
@property (retain, nonatomic) PUSearchResultsIndexingProgressView *indexingProgressView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (retain, nonatomic) NSLayoutConstraint *indexingViewToNoResultsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *indexingViewToSelfConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fileRadarToIndexViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fileRadarToNoResultsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *fileRadarToSelfConstraint;
@property (weak, nonatomic) id<PUSearchResultsFooterViewDelegate> delegate;
@property (nonatomic, getter=isIndexingViewHidden) BOOL indexingViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_preferredCalloutFont;
+ (id)_preferredBoldLabelFont;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)init;
- (void).cxx_destruct;
- (void)showNoResultsContentForString:(id)a0 suggestionsVisible:(BOOL)a1;
- (void)hideNoResultsContent;
- (BOOL)isNoResultsContentHidden;
- (void)_didSelectTapToRadarButton:(id)a0;
- (void)_updateTapRadarConstraints;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
