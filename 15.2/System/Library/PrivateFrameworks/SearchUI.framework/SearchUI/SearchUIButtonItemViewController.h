@class SFCommandButtonItem, SearchUIRowModel, UIView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIButtonItemViewController : NSObject

@property (retain, nonatomic) SFCommandButtonItem *buttonItem;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (nonatomic) BOOL compact;
@property (retain, nonatomic) UIView *view;

- (void).cxx_destruct;

@end
