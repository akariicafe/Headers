@class NSString, NSObject;

@interface AppletEntity : NSManagedObject

@property (retain, nonatomic) NSObject *applets;
@property (nonatomic) long long crsUpdateCounter;
@property (copy, nonatomic) NSString *seid;
@property (nonatomic) long long version;

+ (id)fetchRequest;

@end
