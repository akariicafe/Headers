@class NSString, UIViewController, UIView;
@protocol SearchUIResultsViewDelegate, SearchUIShowMoreSectionsDelegate, SearchUIFeedbackDelegate;

@interface SearchUICommandEnvironment : NSObject <NSCopying>

@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak, nonatomic) id<SearchUIShowMoreSectionsDelegate> showMoreSectionsDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL isPop;
@property (nonatomic) long long selectableGridPunchoutIndex;
@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIView *sourceView;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
