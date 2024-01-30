@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject {
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary { } *_queueStateDict;
    struct __CFDictionary { } *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    unsigned long long _maxActiveQueueSize;
}

- (void)dealloc;
- (id)init;
- (void)removeDisplay:(id)a0;
- (void).cxx_destruct;
- (id)loadingDisplays;
- (void)_fillActiveBrailleDisplayQueue;
- (id)_queueForState:(int)a0 createQueue:(BOOL)a1;
- (id)activeDisplays;
- (id)activePendingDisplays;
- (unsigned long long)activeQueueMaximumSize;
- (void)addDisplay:(id)a0 withState:(int)a1;
- (id)disconnectedDisplays;
- (unsigned long long)displayCountIncludingDisconnectedDisplays:(BOOL)a0;
- (id)displayForToken:(int)a0;
- (id)primaryDisplay;
- (void)setActiveQueueMaximumSize:(unsigned long long)a0;
- (void)setPrimaryDisplay:(id)a0;
- (void)setState:(int)a0 forDisplay:(id)a1;
- (id)sleepingDisplays;
- (int)stateForDisplay:(id)a0;

@end
