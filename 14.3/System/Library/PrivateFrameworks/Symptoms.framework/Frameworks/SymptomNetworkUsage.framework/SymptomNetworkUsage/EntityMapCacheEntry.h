@class NSObject, NSDate;

@interface EntityMapCacheEntry : NSObject

@property (retain) NSDate *expiryTime;
@property (retain) NSObject *entityName;

- (void).cxx_destruct;
- (id)description;

@end
