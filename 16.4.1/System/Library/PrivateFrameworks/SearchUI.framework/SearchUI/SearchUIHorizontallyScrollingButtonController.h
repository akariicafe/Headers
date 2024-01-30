@class SearchUIImageView, SearchUICardSectionRowModel, UIView, UIButton;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIHorizontallyScrollingButtonController : NSObject

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double width;
@property (nonatomic) double spacing;
@property (nonatomic) BOOL scrollsWithoutStoppingAtBoundaries;
@property (nonatomic) BOOL wantsSeparators;
@property (retain, nonatomic) SearchUIImageView *thumbnailView;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (retain, nonatomic) SearchUICardSectionRowModel *cardSectionRowModel;

- (void).cxx_destruct;

@end
