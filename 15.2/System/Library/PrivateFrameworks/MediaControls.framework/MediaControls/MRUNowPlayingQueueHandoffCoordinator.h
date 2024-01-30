@class MRNowPlayingPlayerResponse;
@protocol MRUNowPlayingQueueHandoffCoordinatorDelegate;

@interface MRUNowPlayingQueueHandoffCoordinator : NSObject

@property (weak, nonatomic) id<MRUNowPlayingQueueHandoffCoordinatorDelegate> delegate;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response;
@property (nonatomic) BOOL hideArtwork;
@property (nonatomic) struct CGSize { double width; double height; } artworkSize;

- (void)beginTransition;
- (void)endTransition;
- (id)description;
- (void).cxx_destruct;
- (void)setupTransition;
- (void)completeHandoff;

@end
