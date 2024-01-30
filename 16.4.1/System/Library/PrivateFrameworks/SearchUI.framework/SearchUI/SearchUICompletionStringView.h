@class UIFont, NSString, SearchUIMaskedLabelsStackView, SFSearchResult, SearchUICompletion, SFCardSection, SearchUICompletionStringModel, SearchUIImageView, UIColor;

@interface SearchUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUIMaskedLabelsStackView *labelsStackView;
@property (retain) SFSearchResult *result;
@property (retain) SFCardSection *cardSection;
@property BOOL focusIsOnFirstResult;
@property (retain) SearchUICompletion *completion;
@property (retain, nonatomic) SearchUICompletionStringModel *searchFieldModel;
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

+ (BOOL)supportsImages;

- (id)completionLabel;
- (void)didFailToLoadImage;
- (id)extensionLabel;
- (id)bridgeLabel;
- (void)didUpdateWithImage:(id)a0;
- (void)updateFields;
- (id)init;
- (void)updateWithResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(BOOL)a2;
- (void).cxx_destruct;
- (void)updateLabelStackVisibility;

@end
