@class NSArray, PRPosterConfiguration, NSMapTable;

@interface PBFPosterExtensionPosterTransitionContext : NSObject

@property (readonly, nonatomic) PRPosterConfiguration *beginSelectedPosterConfiguration;
@property (readonly, nonatomic) PRPosterConfiguration *endSelectedPosterConfiguration;
@property (readonly, nonatomic) PRPosterConfiguration *beginActivePosterConfiguration;
@property (readonly, nonatomic) PRPosterConfiguration *endActivePosterConfiguration;
@property (readonly, nonatomic) BOOL transitioningToNewSelection;
@property (readonly, nonatomic) BOOL transitioningToNewActive;
@property (readonly, nonatomic) NSArray *addedPosters;
@property (readonly, nonatomic) NSArray *updatedPosters;
@property (readonly, nonatomic) NSArray *deletedPosters;
@property (readonly, nonatomic) NSMapTable *homeScreenPosterIdentityForSwitcherConfiguration;

+ (id)contextWithBeginSelectedPoster:(id)a0 endSelectedPoster:(id)a1 beginActivePoster:(id)a2 endActivePoster:(id)a3 deletedPosters:(id)a4 addedPosters:(id)a5 updatedPosters:(id)a6 homeScreenPosterIdentityForSwitcherConfiguration:(id)a7;

- (void).cxx_destruct;
- (id)initWithBeginSelectedPoster:(id)a0 endSelectedPoster:(id)a1 beginActivePoster:(id)a2 endActivePoster:(id)a3 deletedPosters:(id)a4 addedPosters:(id)a5 updatedPosters:(id)a6 homeScreenPosterIdentityForSwitcherConfiguration:(id)a7;

@end
