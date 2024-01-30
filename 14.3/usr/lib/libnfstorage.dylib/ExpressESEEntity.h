@class NSString, NSObject;

@interface ExpressESEEntity : NSManagedObject

@property (copy, nonatomic) NSString *aid;
@property (retain, nonatomic) NSObject *expressInfo;
@property (nonatomic) int version;

+ (id)fetchRequest;

@end
