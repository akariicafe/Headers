@class NSString;
@protocol VSObservanceDelegate;

@interface VSObservance : NSObject

@property (nonatomic, getter=isObserving) BOOL observing;
@property (readonly, nonatomic) id object;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long options;
@property (weak, nonatomic) id<VSObservanceDelegate> delegate;

- (void)stopObserving;
- (void)startObserving;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
