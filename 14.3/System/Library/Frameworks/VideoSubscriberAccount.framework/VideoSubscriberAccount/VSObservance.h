@class NSString;
@protocol VSObservanceDelegate;

@interface VSObservance : NSObject

@property (nonatomic, getter=isObserving) BOOL observing;
@property (readonly, nonatomic) id object;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) id<VSObservanceDelegate> delegate;

- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;

@end
