@class NEIPC, NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface NEIPCWrapper : NSObject {
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    NEIPC *_ipc;
    NSUUID *_identifier;
}

- (void).cxx_destruct;

@end
