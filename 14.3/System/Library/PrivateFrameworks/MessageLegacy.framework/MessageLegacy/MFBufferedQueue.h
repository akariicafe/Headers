@class NSMutableArray;

@interface MFBufferedQueue : NSObject {
    double _timeOfLastFlush;
    NSMutableArray *_queue;
}

@property (readonly, nonatomic) unsigned int size;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic) double maximumLatency;

- (BOOL)_flush;
- (BOOL)addItem:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)initWithMaximumSize:(unsigned int)a0 latency:(double)a1;
- (BOOL)flushIfNecessary;
- (void)dealloc;
- (BOOL)handleItems:(id)a0;
- (unsigned long long)sizeForItem:(id)a0;
- (BOOL)flush;
- (void)removeAllObjects;

@end
