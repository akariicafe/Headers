@class NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonXPCEventHandler : NSObject

@property (readonly, nonatomic) NSMapTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSArray *streams;

- (id)initWithStreams:(id)a0;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)resume;
- (void)removeObserver:(id)a0 name:(id)a1;
- (void)handleEvent:(id)a0 fromStream:(id)a1;
- (id)initWithStreams:(id)a0 queue:(id)a1;

@end
