@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject {
    id _inlineReceivers[12];
    NSMutableArray *_extraReceivers;
}

@property (readonly) SEL selector;
@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithSelector:(SEL)a0 receivers:(id)a1;
- (id)initWithSelector:(SEL)a0 receiversHash:(id)a1;
- (BOOL)hasReceivers;
- (void)enumerateReceiversWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
