@class UIFont, UIColor, SFSearchResult, SFCardSection, SPUICompletionStringModel, NSString, SPUIMaskedLabelsStackView, SearchUIImageView, SPUICompletion;

@interface SPUICompletionStringView : NUIContainerStackView

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

- (void)updateFields;
- (id)init;
- (void).cxx_destruct;
- (id)bridgeLabel;
- (void)updateWithResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(BOOL)a2;
- (id)completionLabel;
- (void)updateLayoutMargins;
- (id)extensionLabel;

@end
