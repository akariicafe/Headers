@class NSArray, NSNumber, NSString;

@interface SSRentalSyncRequest : SSRequest <SSXPCCoding>

@property (readonly) NSArray *sinfs;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0 rentalKeyIdentifier:(id)a1;
- (void)startWithConnectionResponseBlock:(id /* block */)a0;
- (id)initWithSinfs:(id)a0;
- (id)initWithAccountIdentifier:(id)a0;

@end
