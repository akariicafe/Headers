@interface ICQueryResultsControllerObjC : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ managedObjectContext;
@property (nonatomic, retain) void /* unknown type, empty encoding */ query;
@property (nonatomic, readonly) id fetchRequest;

- (id)init;
- (id)performFetch;
- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0 query:(id)a1;

@end
