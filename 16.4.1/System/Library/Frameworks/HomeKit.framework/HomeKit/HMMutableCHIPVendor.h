@class NSString;

@interface HMMutableCHIPVendor : HMCHIPVendor

@property (copy) NSString *name;
@property (getter=isAppleVendor) BOOL appleVendor;
@property (getter=isSystemCommissionerVendor) BOOL systemCommissionerVendor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
