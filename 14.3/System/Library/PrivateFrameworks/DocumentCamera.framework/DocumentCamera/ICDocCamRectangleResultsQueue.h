@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)dequeue;
- (id)peek:(long long)a0;
- (long long)size;
- (void)enqueue:(id)a0;
- (id)peek;
- (void)apply:(id /* block */)a0 fromIndex:(long long)a1 toIndex:(unsigned long long)a2;
- (id)peekTail;
- (void)apply:(id /* block */)a0 atIndex:(long long)a1;

@end
