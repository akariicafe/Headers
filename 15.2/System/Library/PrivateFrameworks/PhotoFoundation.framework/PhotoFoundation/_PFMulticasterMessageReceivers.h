@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

- (void)enumerateReceiversWithBlock:(id /* block */)a0;
- (id)initWithStrongReceivers:(id)a0 weakReceivers:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)count;

@end
