@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;

- (id)dequeue;
- (void)clear;
- (id)peek:(long long)a0;
- (long long)size;
- (void).cxx_destruct;
- (id)init;
- (id)peek;
- (void)enqueue:(id)a0;
- (void)apply:(id /* block */)a0 fromIndex:(long long)a1 toIndex:(unsigned long long)a2;
- (id)peekTail;
- (void)apply:(id /* block */)a0 atIndex:(long long)a1;

@end
