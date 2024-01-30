@class NSNumber, NSString, NSDate;

@interface BCSConfigItem : NSObject <BCSExpiring, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long buckets;
@property (readonly, nonatomic) long long shards;
@property (readonly, nonatomic) NSNumber *itemTTL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keysRequestedForCloudKitFetch;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithJSONObj:(id)a0;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2;
- (id)_extractItemTTLFromConfigRecord:(id)a0;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2 itemTTL:(id)a3;

@end
