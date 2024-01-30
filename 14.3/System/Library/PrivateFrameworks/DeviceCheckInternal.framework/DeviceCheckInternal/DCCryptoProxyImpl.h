@class NSString;

@interface DCCryptoProxyImpl : NSObject <DCCryptoProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchOpaqueBlobWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_fetchPublicKey:(id /* block */)a0;

@end
