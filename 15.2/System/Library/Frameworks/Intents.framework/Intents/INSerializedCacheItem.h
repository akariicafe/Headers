@class NSString, NSDictionary;

@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *payload;

+ (void)serializeCacheableObjects:(id)a0 completion:(id /* block */)a1;
+ (void)deserializeCacheItems:(id)a0 completion:(id /* block */)a1;
+ (void)deserializeCacheItem:(id)a0 completion:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 identifier:(id)a1 payload:(id)a2;

@end
