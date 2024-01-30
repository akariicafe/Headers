@class NSString, NSXPCConnection;
@protocol WFUIPresenterHostInterface;

@interface WFUIPresenterXPCConnection : NSObject <WFUIPresenterConnection>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL connected;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) id<WFUIPresenterHostInterface> host;
@property (readonly, nonatomic) BOOL isConnected;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
