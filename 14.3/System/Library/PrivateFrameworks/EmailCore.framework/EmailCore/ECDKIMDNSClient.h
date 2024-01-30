@class NSString;

@interface ECDKIMDNSClient : NSObject <ECDKIMPublicKeySource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPublicKeyRecordsFromDomain:(id)a0 withSelector:(id)a1 completionHandler:(id /* block */)a2;

@end
