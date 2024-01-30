@class NSString, NSDate;

@interface PGCacherStatusEntry : NSManagedObject

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *lastSuccessfulFetchedDate;
@property (nonatomic, copy) NSDate *lastFailedFetchedDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
