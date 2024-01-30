@class NSString;

@interface _CKDispatchQueueBlock : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long priority;
@property (nonatomic, setter=setFIFO:) unsigned long long fifo;

- (long long)compare:(id)a0;
- (id)initWithBlock:(id /* block */)a0 key:(id)a1 priority:(long long)a2 fifo:(unsigned long long)a3;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;

@end
