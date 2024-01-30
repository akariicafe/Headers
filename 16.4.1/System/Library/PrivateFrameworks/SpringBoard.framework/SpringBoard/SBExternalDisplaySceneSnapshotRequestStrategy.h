@class NSString;

@interface SBExternalDisplaySceneSnapshotRequestStrategy : NSObject <SBSceneSnapshotRequestStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)snapshotRequestsForSceneHandle:(id)a0 settings:(id)a1 snapshotRequestContext:(id)a2;

@end
