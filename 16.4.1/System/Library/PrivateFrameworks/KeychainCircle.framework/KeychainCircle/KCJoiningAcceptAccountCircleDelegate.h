@class NSString;

@interface KCJoiningAcceptAccountCircleDelegate : NSObject <KCJoiningAcceptCircleDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegate;

- (id)circleGetInitialSyncViews:(unsigned int)a0 error:(id *)a1;
- (id)circleJoinDataFor:(struct __OpaqueSOSPeerInfo { } *)a0 error:(id *)a1;

@end
