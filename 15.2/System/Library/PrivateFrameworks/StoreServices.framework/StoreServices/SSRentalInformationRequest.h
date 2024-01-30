@class NSNumber, NSString;

@interface SSRentalInformationRequest : SSRequest <SSXPCCoding>

@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountIdentifier:(id)a0 rentalKeyIdentifier:(id)a1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (void)startWithResponseBlock:(id /* block */)a0;

@end
