@class NEIPC, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface NEIPCWrapper : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *sendQueue;
@property (readonly) NSObject<OS_dispatch_queue> *ipcQueue;
@property (readonly) NEIPC *ipc;
@property (readonly) NSUUID *identifier;

+ (void)cancelSharedWrapperForSession:(void *)a0;
+ (id)sharedWrapperForSession:(void *)a0;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSession:(void *)a0 identifier:(id)a1;

@end
