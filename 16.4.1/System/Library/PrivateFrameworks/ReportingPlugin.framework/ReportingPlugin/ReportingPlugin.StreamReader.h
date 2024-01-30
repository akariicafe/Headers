@class NSString, NSSet;

@interface ReportingPlugin.StreamReader : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSSet *bookmarks;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
