@class NSString, NSMapTable;

@interface CHDelegateManager : NSObject <CHDelegateManager>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } accessorLock;
@property (readonly, nonatomic) NSMapTable *delegateToQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)performDelegateSelector:(SEL)a0 withDelegate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)performDelegateSelector:(SEL)a0;

@end
