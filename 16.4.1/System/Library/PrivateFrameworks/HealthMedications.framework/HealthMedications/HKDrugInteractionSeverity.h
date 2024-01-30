@class NSSet;

@interface HKDrugInteractionSeverity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long severityLevel;
@property (readonly, copy, nonatomic) NSSet *validRegionCodes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSeverityLevel:(unsigned long long)a0 validRegionCodes:(id)a1;

@end
