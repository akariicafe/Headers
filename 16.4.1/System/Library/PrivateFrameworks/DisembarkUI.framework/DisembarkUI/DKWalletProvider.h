@class NSString;

@interface DKWalletProvider : NSObject <DKWalletProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchAppleWalletCards:(id /* block */)a0;
- (id)localPaymentCards;

@end
