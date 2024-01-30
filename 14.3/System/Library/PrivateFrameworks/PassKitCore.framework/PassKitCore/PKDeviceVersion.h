@class NSString;

@interface PKDeviceVersion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *generation;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) PKDeviceVersion *companion;

+ (id)fromCurrentDeviceVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (BOOL)isEqualToDeviceVersion:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
