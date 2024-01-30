@class NSString, _PASBloomFilter, NSDate;

@interface BCSShardItem : NSObject <BCSShardItemProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _PASBloomFilter *bloomFilter;
@property (retain, nonatomic) NSString *bloomFilterString;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long startIndex;
@property (readonly, nonatomic) long long shardCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBloomFilterString:(id)a0 startIndex:(long long)a1 shardCount:(long long)a2 type:(long long)a3 expirationDate:(id)a4;
- (id)initWithBloomFilter:(id)a0 bloomFilterString:(id)a1 startIndex:(long long)a2 shardCount:(long long)a3 type:(long long)a4 expirationDate:(id)a5;
- (BOOL)containsItemMatching:(id)a0;
- (id)initWithBusinessLinkShardItem:(id)a0;
- (id)initWithJSONObj:(id)a0 type:(long long)a1;
- (id)initWithRecord:(id)a0 type:(long long)a1;

@end
