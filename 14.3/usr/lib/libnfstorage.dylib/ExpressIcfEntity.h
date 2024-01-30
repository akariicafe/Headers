@class NSString;

@interface ExpressIcfEntity : NSManagedObject

@property (copy, nonatomic) NSString *aid;

+ (id)fetchRequest;

@end
