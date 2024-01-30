@class NSString, NSArray, BSEventQueueEvent, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BSEventQueue : NSObject <BSDescriptionProviding> {
    NSHashTable *_eventQueueLocks;
    NSMutableArray *_eventQueue;
    BOOL _processingEvents;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *pendingEvents;
@property (readonly, nonatomic) BSEventQueueEvent *executingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flushEvents:(id)a0;
- (void)flushAllEvents;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)executeOrInsertEvent:(id)a0 atPosition:(int)a1;
- (void)flushPendingEvents;
- (id)succinctDescriptionBuilder;
- (void)_noteWillCancelEventsWithName:(id)a0 count:(unsigned long long)a1;
- (id)acquireLockForReason:(id)a0;
- (id)initWithName:(id)a0 onQueue:(id)a1;
- (BOOL)hasEventWithPrefix:(id)a0;
- (void)_noteQueueDidLock;
- (void)cancelEventsWithName:(id)a0;
- (void)_noteWillPendEvents:(id)a0 atPosition:(int)a1;
- (void)_noteWillExecuteEvent:(id)a0;
- (void)_noteQueueDidUnlock;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)_shouldProcessEvent:(id)a0 enqueuedDuringExecutionOfEvent:(id)a1;
- (void)relinquishLock:(id)a0;
- (void)executeOrInsertEvents:(id)a0 atPosition:(int)a1;
- (BOOL)hasEventWithName:(id)a0;
- (void)_noteQueueDidDrain;
- (void).cxx_destruct;

@end
