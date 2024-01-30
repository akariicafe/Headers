@class NSUUID, NSString;
@protocol HMIAnalysisStateManagerDelegate;

@interface HMIAnalysisStateManager : HMFObject <HMFLogging>

@property (weak) id<HMIAnalysisStateManagerDelegate> delegate;
@property (readonly, copy) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)stateUpdateFromFaceEvents:(id)a0;
- (void)publishLocalState:(id)a0;
- (void).cxx_destruct;
- (id)initWithHomeUUID:(id)a0;
- (void)handleRemoteStateUpdate:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleRemoteStateUpdate:(id)a0;

@end
