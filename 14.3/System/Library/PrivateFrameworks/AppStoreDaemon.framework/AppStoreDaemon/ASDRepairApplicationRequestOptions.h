@class NSString, NSNumber;

@interface ASDRepairApplicationRequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *accountDSID;
@property (readonly, nonatomic) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 accountIdentifier:(id)a1 claimStyle:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
