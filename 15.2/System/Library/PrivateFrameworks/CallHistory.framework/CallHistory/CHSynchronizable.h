@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CHSynchronizable : NSObject <CHSynchronizable>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)execute:(id /* block */)a0;
- (BOOL)executeSyncWithBOOL:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0;
- (id)executeSyncWithResult:(id /* block */)a0;
- (void)executeSync:(id /* block */)a0;

@end
