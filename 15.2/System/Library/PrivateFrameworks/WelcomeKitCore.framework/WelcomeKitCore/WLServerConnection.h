@class NSMutableSet, NSObject;
@protocol WLServerConnectionDelegate, OS_dispatch_queue;

@interface WLServerConnection : NSObject <WLConnection> {
    int _sockfd;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
}

@property (weak, nonatomic) id<WLServerConnectionDelegate> delegate;

- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_read:(int)a0;
- (int)_listen:(int)a0;
- (void)_accept:(int)a0;
- (BOOL)_isTerminated:(const char *)a0 length:(long long)a1;
- (void)listen:(int)a0;

@end
