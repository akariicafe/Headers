@class IMTimer, NSMutableDictionary;

@interface IMDRecentsController : NSObject {
    NSMutableDictionary *_typingContext;
    IMTimer *_typingContextTimer;
    NSMutableDictionary *_activeDeviceForHandle;
}

+ (id)sharedInstance;

- (void)noteRecentMessageForPeople:(id)a0;
- (void)__pruneTypingContexts;
- (BOOL)hasRecentlyMessaged:(id)a0;
- (void)_setTimerForPruningTypingContext;
- (id)activeDeviceForHandle:(id)a0;
- (void)updateLatestActiveDestination:(id)a0 ForHandle:(id)a1 incomingType:(unsigned char)a2;
- (void).cxx_destruct;

@end
