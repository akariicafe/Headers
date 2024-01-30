@class UIFont, UIColor, SFSearchResult, SFCardSection, SPUICompletionStringModel, NSString, SPUIMaskedLabelsStackView, SearchUIImageView, SPUICompletion;

@interface SPUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>

@property (retain) SearchUIImageView *imageView;
@property (retain) SPUIMaskedLabelsStackView *labelsStackView;
@property (retain) SFSearchResult *result;
@property (retain) SFCardSection *cardSection;
@property BOOL focusIsOnFirstResult;
@property (retain) SPUICompletion *completion;
@property (retain, nonatomic) SPUICompletionStringModel *searchFieldModel;
@property (retain, nonatomic) UIFont *fontForCompletionLabel;
@property (retain, nonatomic) UIColor *textColorForCompletionLabel;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (readonly) NSString *completionText;
@property (readonly) double trailingPaddingForFieldEditor;
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasPrefix;
@property (readonly) NSString *copyableString;
@property (readonly) BOOL completionResultIsPotentiallyPunchout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)completionLabel;
- (void)didFailToLoadImage;
- (id)extensionLabel;
- (id)bridgeLabel;
- (void)didUpdateWithImage:(id)a0;
- (void)updateFields;
- (void)updateLayoutMargins;
- (id)init;
- (void)updateWithResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(BOOL)a2;
- (void).cxx_destruct;

@end
