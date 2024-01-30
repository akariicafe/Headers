@class NSString, NSDictionary, NSObject;

@interface CAMBufferKeyValueObserverObservanceChange : CAMBufferObservanceChange

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, weak, nonatomic) NSObject *object;
@property (readonly, copy, nonatomic) NSDictionary *change;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 ofObject:(id)a1 withChange:(id)a2;

@end
