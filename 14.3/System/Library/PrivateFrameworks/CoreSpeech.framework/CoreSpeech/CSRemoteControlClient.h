@class NSObject;
@protocol OS_dispatch_queue, CSRemoteControlClientDelegate;

@interface CSRemoteControlClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<CSRemoteControlClientDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isConnected;
- (BOOL)waitingForConnection:(double)a0 error:(id *)a1;

@end
