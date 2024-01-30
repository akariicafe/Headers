@class STManagementState, NSString;

@interface TUScreenTimeDataSource : NSObject <TUScreenTimeStateDataSource>

@property (readonly, nonatomic) STManagementState *screenTimeManagementState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)screenTimeStateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
