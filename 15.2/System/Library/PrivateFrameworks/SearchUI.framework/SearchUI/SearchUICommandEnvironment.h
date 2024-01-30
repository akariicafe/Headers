@class SFButtonItem, NSString, SearchUISectionModel, SFResultSection, UIView, UIViewController;
@protocol SearchUICommandDelegate, SearchUIResultsViewDelegate, SearchUIFeedbackDelegate, SearchUIShowMoreSectionsDelegate, SearchUIRowModelViewDelegate;

@interface SearchUICommandEnvironment : NSObject <NSCopying>

@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) id<SearchUIResultsViewDelegate> resultsViewDelegate;
@property (weak, nonatomic) id<SearchUIShowMoreSectionsDelegate> showMoreSectionsDelegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (weak, nonatomic) id<SearchUIRowModelViewDelegate> rowModelViewDelegate;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic) BOOL shouldUseStandardSectionInsets;
@property (nonatomic) BOOL threeDTouchEnabled;
@property (nonatomic) BOOL isPop;
@property (nonatomic) long long selectableGridPunchoutIndex;
@property (copy, nonatomic) NSString *searchString;
@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) unsigned long long queryId;
@property (weak, nonatomic) SearchUISectionModel *lastEngagedSection;
@property (retain, nonatomic) SFButtonItem *buttonItem;
@property (retain, nonatomic) SFResultSection *section;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) UIView *sourceView;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
