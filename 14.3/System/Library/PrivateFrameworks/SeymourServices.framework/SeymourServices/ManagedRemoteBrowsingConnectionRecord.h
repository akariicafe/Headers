@class NSString, NSDate;

@interface ManagedRemoteBrowsingConnectionRecord : NSManagedObject

@property (nonatomic, copy) NSString *participantIdentifier;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
