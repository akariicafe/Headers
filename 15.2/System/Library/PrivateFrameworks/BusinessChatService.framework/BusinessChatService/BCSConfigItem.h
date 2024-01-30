@class NSString, NSURL, NSDate, NSNumber;

@interface BCSConfigItem : NSObject <BCSExpiring, NSCopying, NSSecureCoding> {
    long long _shards;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long buckets;
@property (readonly, nonatomic) long long filterShardCount;
@property (readonly, nonatomic) NSNumber *itemTTL;
@property (readonly, nonatomic) NSURL *filterMegaShardURL;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keysRequestedForCloudKitFetch;

- (id)initWithRecord:(id)a0;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2 filterMegaShardURL:(id)a3 itemTTL:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)_extractItemTTLFromConfigRecord:(id)a0;
- (void).cxx_destruct;
- (id)initWithJSONObj:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBuckets:(long long)a0 shards:(long long)a1 expirationDate:(id)a2;

@end
