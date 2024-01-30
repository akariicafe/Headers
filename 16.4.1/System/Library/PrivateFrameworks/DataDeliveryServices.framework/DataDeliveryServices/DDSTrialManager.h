@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, DDSTrialManagerDelegate, DDSTrialManagerDataSource;

@interface DDSTrialManager : NSObject <DDSTrialClientDelegate, DDSTrialManager>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<DDSTrialManagerDataSource> dataSource;
@property (readonly) NSMutableDictionary *trialClientByQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<DDSTrialManagerDelegate> delegate;

- (void)fetchTrialAssetForQuery:(id)a0 callback:(id /* block */)a1;
- (void)setUpTrialForQuery:(id)a0;
- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (id)initWithWorkQueue:(id)a0 dataSource:(id)a1;
- (void)trialClient:(id)a0 didReceiveAsset:(id)a1;
- (void)trialClientDidStop:(id)a0;

@end
