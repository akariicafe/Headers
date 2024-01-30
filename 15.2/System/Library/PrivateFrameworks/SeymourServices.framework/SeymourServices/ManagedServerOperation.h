@class NSData;

@interface ManagedServerOperation : NSManagedObject

@property (nonatomic, copy) NSData *request;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
