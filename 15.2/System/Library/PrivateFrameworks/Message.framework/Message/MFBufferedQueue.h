@class NSMutableArray;

@interface MFBufferedQueue : NSObject {
    double _timeOfLastFlush;
    NSMutableArray *_queue;
}

@property (readonly, nonatomic) unsigned int size;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic) double maximumLatency;

- (BOOL)flush;
- (BOOL)addItem:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)sizeForItem:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_flush;
- (id)initWithMaximumSize:(unsigned int)a0 latency:(double)a1;
- (BOOL)flushIfNecessary;
- (BOOL)handleItems:(id)a0;

@end
