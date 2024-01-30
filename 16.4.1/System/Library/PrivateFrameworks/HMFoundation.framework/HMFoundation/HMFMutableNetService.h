@class NSDictionary;

@interface HMFMutableNetService : HMFNetService

@property (copy, nonatomic) id /* block */ publishBlock;
@property unsigned long long port;
@property (copy) NSDictionary *TXTRecord;

- (id)internal;
- (id)initWithNetService:(id)a0;
- (void)setInternal:(id)a0;
- (void)setPort:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2 port:(unsigned long long)a3;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void)netServiceDidPublish:(id)a0;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceWillPublish:(id)a0;
- (void)updateTXTRecord;
- (void)removeTXTRecordValueForKey:(id)a0;
- (void)setTXTRecord:(id)a0;
- (void)setTXTRecordValue:(id)a0 forKey:(id)a1;
- (void)startPublishingWithCompletionHandler:(id /* block */)a0;
- (void)stopPublishing;
- (void)updateTXTRecordWithData:(id)a0;

@end
