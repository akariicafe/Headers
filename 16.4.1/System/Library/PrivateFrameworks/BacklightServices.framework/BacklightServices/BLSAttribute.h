@class NSString;

@interface BLSAttribute : NSObject <BSXPCCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:(id)a0 error:(out id *)a1;
- (BOOL)canBePaused;
- (BOOL)checkEntitlementSource:(id)a0 forSingleEntitlement:(id)a1 error:(out id *)a2;
- (id)errorForMissingEntitlement:(id)a0 inSource:(id)a1;

@end
