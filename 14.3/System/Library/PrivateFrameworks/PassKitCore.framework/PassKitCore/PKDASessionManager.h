@class PKDASession, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface PKDASessionManager : NSObject <PKSessionDelegate> {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    id /* block */ _sessionCreationBlock;
    PKDASession *_session;
    NSMutableArray *_workItems;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 sessionCreationBlock:(id /* block */)a1;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)createSession;
- (void)performBlockWithSession:(id /* block */)a0;

@end
