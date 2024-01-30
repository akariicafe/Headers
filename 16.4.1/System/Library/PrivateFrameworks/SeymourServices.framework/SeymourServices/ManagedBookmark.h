@class NSString, NSDate;

@interface ManagedBookmark : NSManagedObject

@property (nonatomic, copy) NSDate *dateBookmarked;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSString *referenceType;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
