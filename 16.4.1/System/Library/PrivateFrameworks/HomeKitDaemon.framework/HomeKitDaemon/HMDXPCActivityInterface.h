@class NSString;

@interface HMDXPCActivityInterface : HMFObject <HMDXPCActivityInterfacing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)criteriaForXPCActivity:(id)a0;
- (void)registerXPCActivityWithActivityIdentifier:(id)a0 criteria:(id)a1 activityBlock:(id /* block */)a2;
- (void)setCriteria:(id)a0 forXPCActivity:(id)a1;
- (BOOL)setState:(long long)a0 forXPCActivity:(id)a1;
- (long long)stateForXPCActivity:(id)a0;
- (void)unregisterXPCActivityWithActivityIdentifier:(id)a0;

@end
