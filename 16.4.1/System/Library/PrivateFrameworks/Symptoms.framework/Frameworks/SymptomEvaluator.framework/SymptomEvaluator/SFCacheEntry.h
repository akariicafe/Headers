@class NSDate, NSObject;

@interface SFCacheEntry : NSObject

@property (retain, nonatomic) NSObject *item;
@property (retain, nonatomic) NSDate *lastUsed;

- (void).cxx_destruct;
- (id)initWithCacheItem:(id)a0;

@end
