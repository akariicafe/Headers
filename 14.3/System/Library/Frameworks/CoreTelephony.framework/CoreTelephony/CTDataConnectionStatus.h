@class NSNumber, NSString;

@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *pdp;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *apnName;
@property (nonatomic) unsigned int wirelessTechnologyMask;
@property (nonatomic) int state;
@property (nonatomic) int ipFamily;
@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL publicNetAllowed;
@property (nonatomic) int contextType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
