@class NSString, CLLocationManagerRoutine, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) id delegate;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (nonatomic) BOOL updating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateLocations:(id)a0;
- (void)createConnection;
- (void)dealloc;
- (id)initWithQueue:(id)a0 locationManagerRoutine:(id)a1;
- (void)didUpdateLocations:(id)a0 withReply:(id /* block */)a1;

@end
