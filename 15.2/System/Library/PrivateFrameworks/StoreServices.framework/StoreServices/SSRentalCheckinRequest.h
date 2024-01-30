@class NSArray, NSNumber;

@interface SSRentalCheckinRequest : SSRequest {
    NSNumber *_accountIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property (readonly) NSArray *sinfs;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;

- (id)initWithSinfs:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 rentalKeyIdentifier:(id)a1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)startWithConnectionResponseBlock:(id /* block */)a0;

@end
