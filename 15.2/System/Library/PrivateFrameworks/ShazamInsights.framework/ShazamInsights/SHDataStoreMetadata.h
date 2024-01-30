@class NSString, NSDate;

@interface SHDataStoreMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *etag;
@property (readonly, copy, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSDate *fetchDate;

- (void).cxx_destruct;
- (id)initWithStorefront:(id)a0 fetchDate:(id)a1 etag:(id)a2;

@end
