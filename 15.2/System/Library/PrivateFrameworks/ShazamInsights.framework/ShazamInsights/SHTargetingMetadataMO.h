@class NSString, NSDate;

@interface SHTargetingMetadataMO : NSManagedObject

@property (copy, nonatomic) NSString *etag;
@property (copy, nonatomic) NSDate *fetchDate;
@property (copy, nonatomic) NSString *storefront;

+ (id)fetchRequest;

@end
