@interface _NSPlaceholderObservation : NSObservation

- (id)retain;
- (id)initWithObservable:(id)a0 blockSink:(id /* block */)a1 tag:(int)a2;
- (oneway void)release;
- (id)initWithObservable:(id)a0 observer:(id)a1;
- (unsigned long long)retainCount;

@end
