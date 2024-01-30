@class NSString, NSDate;

@interface PlusMediaSuggestionStoreUpdateRecord : NSManagedObject

@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSDate *timestamp;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
