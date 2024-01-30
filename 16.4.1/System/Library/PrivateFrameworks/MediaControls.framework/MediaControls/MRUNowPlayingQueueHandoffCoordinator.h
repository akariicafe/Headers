@class MRNowPlayingPlayerResponse;
@protocol MRUNowPlayingQueueHandoffCoordinatorDelegate;

@interface MRUNowPlayingQueueHandoffCoordinator : NSObject

@property (weak, nonatomic) id<MRUNowPlayingQueueHandoffCoordinatorDelegate> delegate;
@property (nonatomic) long long state;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response;
@property (nonatomic) BOOL hideArtwork;
@property (nonatomic) struct CGSize { double width; double height; } artworkSize;

- (void)beginTransition;
- (void)endTransition;
- (id)description;
- (void).cxx_destruct;
- (void)completeHandoff;
- (void)setupTransition;
- (id)stateDescription:(long long)a0;

@end
