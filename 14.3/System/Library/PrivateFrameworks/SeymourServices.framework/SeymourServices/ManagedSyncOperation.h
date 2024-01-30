@class NSString;

@interface ManagedSyncOperation : NSManagedObject

@property (nonatomic, copy) NSString *action;
@property (nonatomic) int domain;
@property (nonatomic, copy) NSString *syncIdentifier;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
