@class NSArray, NSNumber, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
}

@property (readonly) NSArray *sinfs;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSNumber *rentalKeyIdentifier;
@property (readonly) long long downloadIdentifier;
@property (nonatomic) BOOL shouldValidateRentalInfo;
@property (nonatomic, getter=shouldCheckoutWithPlay) BOOL checkoutWithPlay;
@property unsigned long long checkoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)init;
- (id)initWithAccountIdentifier:(id)a0 rentalKeyIdentifier:(id)a1;
- (void)dealloc;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)startWithConnectionResponseBlock:(id /* block */)a0;
- (id)initWithSinfs:(id)a0;
- (id)initWithDownloadIdentifier:(long long)a0;

@end
