@class NSString, NSObject;
@protocol TRINotificationToken, DDSTRIClient, DDSTrialClientDelegate, OS_dispatch_queue;

@interface DDSTrialClient : NSObject <DDSTrialClient>

@property (readonly) id<DDSTRIClient> triClient;
@property (readonly, copy) NSString *triNamespaceName;
@property (retain) id<TRINotificationToken> notificationToken;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<DDSTrialClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithWorkQueue:(id)a0 query:(id)a1;

- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)fetchAssetWithCallback:(id /* block */)a0;
- (id)initWithWorkQueue:(id)a0 triClient:(id)a1 triNamespaceName:(id)a2;

@end
