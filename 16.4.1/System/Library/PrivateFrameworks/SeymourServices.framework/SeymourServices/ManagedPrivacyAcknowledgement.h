@class NSString;

@interface ManagedPrivacyAcknowledgement : NSManagedObject

@property (nonatomic, copy) NSString *feature;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
