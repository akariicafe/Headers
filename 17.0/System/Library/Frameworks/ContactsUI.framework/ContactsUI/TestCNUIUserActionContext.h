@class NSString, BSServiceConnectionEndpoint;
@protocol CNUIUserActionUserActivityOpener, CNUIUserActionURLOpener, CNUIUserActionCurator, CNUIUserActionRecorder, CNUIUserActionDialRequestOpener;

@interface TestCNUIUserActionContext : NSObject <CNUIUserActionContext>

@property (copy, nonatomic) NSString *channelIdentifier;
@property (nonatomic) BOOL actionExecutionWasAttemted;
@property (readonly, nonatomic) id<CNUIUserActionURLOpener> urlOpener;
@property (readonly, nonatomic) id<CNUIUserActionUserActivityOpener> userActivityOpener;
@property (readonly, nonatomic) id<CNUIUserActionDialRequestOpener> dialRequestOpener;
@property (readonly, nonatomic) id<CNUIUserActionRecorder> actionRecorder;
@property (readonly, nonatomic) id<CNUIUserActionCurator> actionCurator;
@property (copy, nonatomic) BSServiceConnectionEndpoint *connectionEndpoint;
@property (nonatomic) BOOL isOriginatingFromFavorites;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nilValue;
- (void).cxx_destruct;

@end
