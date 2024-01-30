@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {
    _PFMulticasterReceiverList *_strongReceivers;
    _PFMulticasterReceiverList *_weakReceivers;
}

- (void).cxx_destruct;
- (void)enumerateReceiversWithBlock:(id /* block */)a0;
- (id)initWithStrongReceivers:(id)a0 weakReceivers:(id)a1;
- (unsigned long long)count;

@end
