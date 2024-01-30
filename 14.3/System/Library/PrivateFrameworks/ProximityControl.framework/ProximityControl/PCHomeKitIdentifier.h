@class NSUUID;

@interface PCHomeKitIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accessoryID;
@property (readonly, copy, nonatomic) NSUUID *homeID;
@property (nonatomic) long long assetType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccessoryID:(id)a0 homeID:(id)a1;

@end
