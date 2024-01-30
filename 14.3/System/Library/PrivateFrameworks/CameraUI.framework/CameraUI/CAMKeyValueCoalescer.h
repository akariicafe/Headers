@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface CAMKeyValueCoalescer : NSObject

@property (readonly, nonatomic) double _interval;
@property (readonly, copy, nonatomic) id /* block */ _handler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *coalescingTimer;
@property (readonly, nonatomic) NSMutableDictionary *_values;
@property (readonly, nonatomic) NSMutableDictionary *_previousValues;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_coalescingQueue;

- (id)initWithInterval:(double)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)flush;
- (void)coalesceValue:(id)a0 forKeyPath:(id)a1;
- (void)_pushCoalescedValues;

@end
