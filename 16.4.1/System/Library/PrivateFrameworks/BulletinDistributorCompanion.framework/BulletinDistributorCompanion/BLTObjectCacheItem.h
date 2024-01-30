@protocol NSSecureCoding;

@interface BLTObjectCacheItem : NSObject

@property (readonly, nonatomic) id<NSSecureCoding> object;
@property (readonly, nonatomic) double lastAccessedDate;

+ (id)cacheItemWithObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void)touch;
- (id)description;
- (void).cxx_destruct;

@end
