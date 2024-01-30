@class NSDictionary;

@interface HMFMutableNetService : HMFNetService

@property (copy, nonatomic) id /* block */ publishBlock;
@property unsigned long long port;
@property (copy) NSDictionary *TXTRecord;

- (void)setPort:(unsigned long long)a0;
- (id)initWithNetService:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2 port:(unsigned long long)a3;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;
- (void)netServiceWillPublish:(id)a0;
- (void)netServiceDidStop:(id)a0;
- (id)internal;
- (void)setInternal:(id)a0;
- (void)setTXTRecordValue:(id)a0 forKey:(id)a1;
- (void)removeTXTRecordValueForKey:(id)a0;
- (void)stopPublishing;
- (void)startPublishingWithCompletionHandler:(id /* block */)a0;
- (void)updateTXTRecordWithData:(id)a0;
- (void)setTXTRecord:(id)a0;
- (void)updateTXTRecord;

@end
