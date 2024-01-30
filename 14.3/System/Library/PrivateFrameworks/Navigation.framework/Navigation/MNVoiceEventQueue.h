@class NSMutableArray;
@protocol MNVoiceEventQueueDelegate;

@interface MNVoiceEventQueue : NSObject {
    NSMutableArray *_queue;
}

@property (weak, nonatomic) id<MNVoiceEventQueueDelegate> delegate;

- (void)addEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (void)_removeEventsMatching:(id)a0 includeEventToMatch:(BOOL)a1;
- (BOOL)hasAnotherEvent;
- (id)dequeueNextEvent;

@end
