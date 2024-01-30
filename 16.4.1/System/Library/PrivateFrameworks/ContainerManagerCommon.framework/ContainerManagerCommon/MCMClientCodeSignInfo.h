@class NSData, NSString;
@protocol MCMEntitlements;

@interface MCMClientCodeSignInfo : NSObject <MCMClientCodeSignInfo>

@property (readonly, nonatomic) NSData *cdhash;
@property (readonly, nonatomic) id<MCMEntitlements> entitlements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL cached;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) BOOL isSignatureValid;
@property (readonly, nonatomic) BOOL isPlatformBinary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clientCodeSignInfoByChangingCached:(BOOL)a0;
- (id)initWithCDHash:(id)a0 entitlements:(id)a1 identifier:(id)a2 status:(unsigned long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToClientCodeSignInfo:(id)a0;
- (void).cxx_destruct;

@end
