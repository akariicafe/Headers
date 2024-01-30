@class NSString, NSDate;

@interface ManagedCompletedMarketingVideo : NSManagedObject

@property (nonatomic, copy) NSDate *dateWatched;
@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
