@class SearchUICombinedCardSectionRowModel, NSMutableDictionary, NSMutableArray;
@protocol SearchUIFeedbackDelegate;

@interface SearchUICombinedCardSectionsView : NUIContainerStackView

@property (retain, nonatomic) NSMutableDictionary *cardSectionsMapping;
@property (retain, nonatomic) NSMutableArray *uncacheableViews;
@property BOOL hasAttributionFooter;
@property (retain, nonatomic) SearchUICombinedCardSectionRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRowModel:(id)a0 feedbackDelegate:(id)a1;

@end
