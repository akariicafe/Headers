@class NSString;

@interface BLSForceActiveAttribute : BLSAttribute <BSXPCCoding>

@property (readonly, nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)forceActive;
+ (id)forceActiveUserInitiated:(BOOL)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkEntitlementSourceForRequiredEntitlements:(id)a0 error:(out id *)a1;
- (id)initWithUserInitiated:(BOOL)a0;

@end
