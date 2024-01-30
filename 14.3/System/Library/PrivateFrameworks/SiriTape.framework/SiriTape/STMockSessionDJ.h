@class NSArray, NSOrderedSet, NSDictionary, NSMutableOrderedSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, STMockSessionDJDelegate, OS_dispatch_semaphore;

@interface STMockSessionDJ : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_responsesQueue;
    NSObject<OS_dispatch_queue> *_onewayCBqueue;
    NSArray *_recordedCBTimestamps;
    NSArray *_recordedClientBoundAceCommands;
    NSArray *_recordedServerBoundAceCommands;
    NSOrderedSet *_recordedRefIDs;
    NSArray *_recordedStartRequests;
    NSArray *_recordedStartRequestsTimestamps;
    NSDictionary *_SBCommandsAceIDsToTimestamps;
    NSMutableOrderedSet *_newStartRequestIDs;
    NSArray *_getResultObjectsCommands;
    NSArray *_getResultObjectsAceIds;
    NSDictionary *_matchedCommands;
    NSDictionary *_commandsOrderedByType;
    NSDictionary *_indicesOfReplayCommandsByType;
    NSDictionary *_responseTime;
    NSArray *_oneWayClientBoundCommands;
    unsigned long long _replayIndex;
    BOOL _isClientFlow;
    NSObject<OS_dispatch_semaphore> *_finishedSpeech;
    NSObject<OS_dispatch_semaphore> *_requestCompleted;
    NSMutableArray *_completions;
}

@property (weak, nonatomic) id<STMockSessionDJDelegate> delegate;
@property (readonly, nonatomic) BOOL isReplaying;

- (void).cxx_destruct;
- (void)handleAceObject:(id)a0;
- (id)initWithReplayFileURL:(id)a0;
- (void)addFinishRequestCompletion:(id /* block */)a0;
- (void)startReplay;
- (void)addStartRequestID:(id)a0;
- (void)_loadReplayAtURL:(id)a0;
- (void)_matchRefIdsWithAceIds;
- (void)_setUpObserverAction;
- (void)_replayFromCommand:(id)a0 isLastRequest:(BOOL)a1;
- (void)_sendOneWayCBCommandsForStartRequest:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)_sendCommandsFrom:(id)a0 withTimestamps:(id)a1 atIndex:(unsigned long long)a2 isLastRequest:(BOOL)a3;
- (id)_getEventContextFromEvent:(id)a0;

@end
