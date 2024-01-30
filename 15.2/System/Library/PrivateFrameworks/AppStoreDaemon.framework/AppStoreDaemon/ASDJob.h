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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithPersistentID:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
