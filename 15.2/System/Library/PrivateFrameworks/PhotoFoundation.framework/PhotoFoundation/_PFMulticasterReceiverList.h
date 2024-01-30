@class NSMutableArray;

@interface _PFMulticasterReceiverList : NSObject {
    id _inlineReceivers[12];
    NSMutableArray *_extraReceivers;
}

@property (readonly) SEL selector;
@property (readonly) unsigned long long count;

- (id)initWithSelector:(SEL)a0 receivers:(id)a1;
- (BOOL)hasReceivers;
- (id)initWithSelector:(SEL)a0 receiversHash:(id)a1;
- (void)enumerateReceiversWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
