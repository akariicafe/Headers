@interface _NSPlaceholderObservation : NSObservation

- (oneway void)release;
- (unsigned long long)retainCount;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (id)retain;
- (id)initWithObservable:(id)a0 observer:(id)a1;

@end
