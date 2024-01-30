@class NSString, NSSet;

@interface PurpleTrustClientEntity : NSManagedObject

@property (copy, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSSet *purpleTrust;

+ (id)fetchRequest;

@end
