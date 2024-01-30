@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject

@property (retain, nonatomic) FBSServiceFacility *facility;
@property (copy, nonatomic) id /* block */ completion;

+ (id)pendingConnectionToFacility:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithFacility:(id)a0 completion:(id /* block */)a1;

@end
