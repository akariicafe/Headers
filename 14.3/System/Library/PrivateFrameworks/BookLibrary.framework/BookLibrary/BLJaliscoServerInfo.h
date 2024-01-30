@class NSString;

@interface BLJaliscoServerInfo : NSManagedObject

@property (retain, nonatomic) NSString *databaseVersion;
@property (retain, nonatomic) NSString *userUID;
@property (nonatomic) double lastPolledAt;

- (id)initIntoManagedObjectContext:(id)a0;

@end
