@class NSString;

@interface TPECPublicKeyFactory : NSObject <TPPublicKeyFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyFromSPKI:(id)a0;

@end
