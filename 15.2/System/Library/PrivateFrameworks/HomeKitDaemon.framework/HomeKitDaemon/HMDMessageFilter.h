@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMessageFilter : HMFObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)resetConfiguration;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (BOOL)shouldCloudSyncData;

@end
