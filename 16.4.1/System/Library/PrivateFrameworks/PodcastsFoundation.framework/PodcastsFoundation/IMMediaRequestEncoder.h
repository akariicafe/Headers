@class NSString;

@interface IMMediaRequestEncoder : AMSMediaRequestEncoder <IMRequestEncoding>

@property (nonatomic) BOOL personalizeRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareRequest:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)prepareRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithBag:(id)a0 session:(id)a1;

@end
