@class NSProtocolChecker, NSMutableArray, Protocol;

@interface IMInvocationQueue : NSObject

@property (readonly, nonatomic) BOOL holdQueue;
@property (readonly, retain, nonatomic) NSMutableArray *queue;
@property (readonly, retain, nonatomic) NSMutableArray *options;
@property (readonly, retain, nonatomic) NSProtocolChecker *protocolChecker;
@property (retain, nonatomic) Protocol *protocol;
@property id target;
@property id delegate;
@property (nonatomic) double dequeueRate;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeAllInvocations;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)_invokeInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (int)_maxQueueLimitSize;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (int)_numberOfLimitedMessagesInQueue;
- (void)_releaseQueueNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (id)peek;
- (void)_setQueueTimer;
- (id)_dequeueInvocation;
- (void)invokeAll;
- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (void)_stepQueueNotification:(id)a0;
- (void)dealloc;
- (void)_checkQueue;
- (void)_holdQueueNotification:(id)a0;

@end
