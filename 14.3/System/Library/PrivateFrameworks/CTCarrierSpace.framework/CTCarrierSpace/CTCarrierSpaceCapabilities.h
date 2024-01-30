@interface CTCarrierSpaceCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsServices;
@property (nonatomic) BOOL supportsUsage;
@property (nonatomic) BOOL supportsPlans;
@property (nonatomic) BOOL supportsApplications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
