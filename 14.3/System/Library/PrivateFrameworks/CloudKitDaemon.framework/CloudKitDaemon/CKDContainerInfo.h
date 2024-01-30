@class NSURL, NSString;

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *publicCloudDBURL;
@property (copy, nonatomic) NSURL *publicShareServiceURL;
@property (copy, nonatomic) NSURL *publicDeviceServiceURL;
@property (copy, nonatomic) NSURL *publicCodeServiceURL;
@property (copy, nonatomic) NSURL *publicMetricsServiceURL;
@property (copy, nonatomic) NSString *containerScopedUserID;
@property (copy, nonatomic) NSString *orgAdminUserID;
@property (nonatomic) long long environment;

- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
