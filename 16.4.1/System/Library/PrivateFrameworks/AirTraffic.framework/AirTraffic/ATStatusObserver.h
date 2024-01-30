@class NSString, NSXPCConnection;
@protocol ATStatusObserverDelegate;

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL ATCRunning;
@property (nonatomic) BOOL resumed;
@property (nonatomic) int notifyToken;
@property (weak, nonatomic) id<ATStatusObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)suspend;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)fetchAllStatusWithCompletion:(id /* block */)a0;
- (void)updateWithStatus:(id)a0;

@end
