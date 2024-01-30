@class NSString, NSSet;

@interface PlusMediaSuggestionTagCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *taggedItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
