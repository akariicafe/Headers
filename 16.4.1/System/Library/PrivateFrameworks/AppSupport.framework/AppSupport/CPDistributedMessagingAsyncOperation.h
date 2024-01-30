@class NSString, NSThread, CPDistributedMessagingCenter, NSData, NSDictionary, NSError;

@interface CPDistributedMessagingAsyncOperation : NSOperation {
    CPDistributedMessagingCenter *_center;
    NSString *_name;
    NSData *_userInfoData;
    NSString *_oolKey;
    NSData *_oolData;
    id _target;
    SEL _selector;
    void *_context;
    BOOL _makeServer;
    NSThread *_calloutThread;
    NSDictionary *_reply;
    NSError *_error;
}

- (void)main;
- (void)dealloc;
- (void)_performCallout;
- (void)_releaseSendingData;
- (id)initWithCenter:(id)a0 messageName:(id)a1 userInfoData:(id)a2 oolKey:(id)a3 oolData:(id)a4 target:(id)a5 selector:(SEL)a6 context:(void *)a7 makeServer:(BOOL)a8;

@end
