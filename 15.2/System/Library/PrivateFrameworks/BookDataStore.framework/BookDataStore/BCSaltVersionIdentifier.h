@class NSString;

@interface BCSaltVersionIdentifier : NSManagedObject

@property (retain, nonatomic) NSString *localSaltVersionIdentifier;
@property (retain, nonatomic) NSString *serverSaltVersionIdentifier;

+ (id)fetchRequest;

- (id)initIntoManagedObjectContext:(id)a0;

@end
