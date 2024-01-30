@class NSMutableArray;

@interface MFBufferedQueue : NSObject {
    double _timeOfLastFlush;
    NSMutableArray *_queue;
}

@property (readonly, nonatomic) unsigned int size;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic) double maximumLatency;

- (BOOL)isEmpty;
- (BOOL)addItem:(id)a0;
- (unsigned long long)sizeForItem:(id)a0;
- (BOOL)flush;
- (BOOL)_flush;
- (void)removeAllObjects;
- (id)init;
- (void).cxx_destruct;
- (BOOL)flushIfNecessary;
- (BOOL)handleItems:(id)a0;
- (id)initWithMaximumSize:(unsigned int)a0 latency:(double)a1;

@end
