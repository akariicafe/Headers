@class NSMutableArray;
@protocol MNAudioEventQueueDelegate;

@interface MNAudioSystemEventQueue : NSObject {
    NSMutableArray *_container;
    unsigned long long _capacity;
}

@property (weak, nonatomic) id<MNAudioEventQueueDelegate> delegate;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) BOOL full;

- (id)dequeue;
- (void)clear;
- (void)_enqueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)_dequeue;
- (BOOL)enqueue:(id)a0 withOptions:(unsigned long long)a1 andReport:(out id *)a2;
- (void)_removeEventsMatching:(id)a0;

@end
