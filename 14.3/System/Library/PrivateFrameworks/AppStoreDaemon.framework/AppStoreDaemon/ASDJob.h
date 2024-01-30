@class NSString, NSNumber, NSError;

@interface ASDJob : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *externalOrderKey;
@property (copy, nonatomic) NSError *failureError;
@property (copy, nonatomic) NSNumber *orderKey;
@property (nonatomic) double percentComplete;
@property (nonatomic) long long persistentID;
@property (nonatomic) long long phase;
@property (nonatomic) long long purchaseID;
@property (nonatomic) long long storeItemID;
@property (nonatomic) long long type;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentID:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
