@class NSString;

@interface CNDonationExtensionRequestHandler : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;
- (unsigned long long)donationVersioningNumber;
- (void)redonateAllValuesWithReason:(unsigned long long)a0;
- (void)renewExpirationDateForDonatedValue:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (void)userDidRejectDonatedValue:(id)a0;

@end
