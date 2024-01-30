@protocol NSSecureCoding;

@interface BLTObjectCacheItem : NSObject

@property (readonly, nonatomic) id<NSSecureCoding> object;
@property (readonly, nonatomic) double lastAccessedDate;

+ (id)cacheItemWithObject:(id)a0;

- (void).cxx_destruct;
- (void)touch;
- (id)initWithObject:(id)a0;
- (id)description;

@end
