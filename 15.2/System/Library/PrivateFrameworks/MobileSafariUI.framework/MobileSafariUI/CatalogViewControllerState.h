@class NSString, UIViewController;

@interface CatalogViewControllerState : NSObject

@property (nonatomic) long long favoritesState;
@property (copy, nonatomic) NSString *queryString;
@property (nonatomic, getter=isShowingCompletions) BOOL showingCompletions;
@property (nonatomic, getter=isShowingUniversalFirstTimeExperience) BOOL showingUniversalFirstTimeExperience;
@property (nonatomic) BOOL fieldIsEmpty;
@property (retain, nonatomic) UIViewController *completionDetailViewController;

- (void).cxx_destruct;

@end
