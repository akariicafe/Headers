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

- (id)peek;
- (long long)_enqueueInvocation:(id)a0 options:(unsigned long long)a1;
- (void)invokeAll;
- (void)_checkQueue;
- (BOOL)_replaceSimilarInvocation:(id)a0;
- (void)_holdQueueNotification:(id)a0;
- (void)removeAllInvocations;
- (id)_dequeueInvocation;
- (BOOL)_invokeInvocation:(id)a0;
- (BOOL)_acceptsOptions:(unsigned long long)a0;
- (unsigned long long)_optionsForInvocation:(id)a0;
- (void)_stepQueueNotification:(id)a0;
- (void)dealloc;
- (int)_numberOfLimitedMessagesInQueue;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)_insertInvocation:(id)a0 options:(unsigned long long)a1;
- (id)init;
- (void)_setQueueTimer;
- (void)_releaseQueueNotification:(id)a0;
- (int)_maxQueueLimitSize;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
