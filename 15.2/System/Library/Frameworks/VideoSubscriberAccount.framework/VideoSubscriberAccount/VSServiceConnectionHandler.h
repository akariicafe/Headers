@class NSXPCConnection;
@protocol VSServiceConnectionHandlerDelegate;

@interface VSServiceConnectionHandler : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<VSServiceConnectionHandlerDelegate> delegate;

- (void).cxx_destruct;
- (void)_didFinish;

@end
