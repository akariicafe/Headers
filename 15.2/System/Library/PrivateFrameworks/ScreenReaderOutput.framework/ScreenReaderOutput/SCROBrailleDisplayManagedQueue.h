@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject {
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary { } *_queueStateDict;
    struct __CFDictionary { } *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    unsigned long long _maxActiveQueueSize;
}

- (void).cxx_destruct;
- (void)removeDisplay:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_queueForState:(int)a0 createQueue:(BOOL)a1;
- (void)_fillActiveBrailleDisplayQueue;
- (id)disconnectedDisplays;
- (void)addDisplay:(id)a0 withState:(int)a1;
- (void)setState:(int)a0 forDisplay:(id)a1;
- (int)stateForDisplay:(id)a0;
- (id)displayForToken:(int)a0;
- (unsigned long long)displayCountIncludingDisconnectedDisplays:(BOOL)a0;
- (id)primaryDisplay;
- (void)setPrimaryDisplay:(id)a0;
- (unsigned long long)activeQueueMaximumSize;
- (void)setActiveQueueMaximumSize:(unsigned long long)a0;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (id)sleepingDisplays;
- (id)loadingDisplays;

@end
