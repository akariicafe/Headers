@class NSString;

@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) long long role;
@property (readonly, copy, nonatomic) NSString *stableIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStableIdentifier:(id)a0 name:(id)a1 model:(id)a2 systemVersion:(id)a3 vendorId:(long long)a4 productId:(long long)a5 role:(long long)a6;

@end
