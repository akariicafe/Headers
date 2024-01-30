@class GKCollectionViewDataSource, NSString, GKPlaceholderContentStateMachine;
@protocol GKSegmentInfoDelegagte;

@interface GKSegmentInfo : NSObject <_GKStateMachineDelegate>

@property (weak, nonatomic) id<GKSegmentInfoDelegagte> delegate;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) GKPlaceholderContentStateMachine *loadingMatchine;
@property (retain, nonatomic) NSString *loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)didEnterErrorState;
- (void)didEnterLoadingState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;

@end
