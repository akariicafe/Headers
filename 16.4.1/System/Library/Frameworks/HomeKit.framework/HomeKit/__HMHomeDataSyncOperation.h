@class HMHomeManager;

@interface __HMHomeDataSyncOperation : HMFOperation

@property (readonly, weak) HMHomeManager *manager;
@property (getter=isRefresh) BOOL refresh;

- (void)main;
- (id)initWithHomeManager:(id)a0;
- (id)initWithHomeManager:(id)a0 timeout:(double)a1;
- (void).cxx_destruct;

@end
