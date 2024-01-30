@class NSString, IKViewElement;

@interface VUIActionUpdateSportsFavorite : VUIAction

@property (weak, nonatomic) IKViewElement *viewElement;
@property (copy, nonatomic) NSString *sportsLeagueID;
@property (copy, nonatomic) NSString *sportsTeamName;

+ (void)performFavoritesOperation:(BOOL)a0 teamId:(id)a1 teamName:(id)a2 requestExecutionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContextData:(id)a0 viewElement:(id)a1;

@end
