@class NSTimeZone, NSString, HMDNaturalLightingCurve;

@interface HMDNaturalLightingContext : HMFObject <HMFLogging, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMDNaturalLightingCurve *curve;
@property (readonly, copy) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCurve:(id)a0 timeZone:(id)a1;

@end
