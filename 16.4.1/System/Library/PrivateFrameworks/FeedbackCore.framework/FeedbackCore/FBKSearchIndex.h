@class NSManagedObjectContext;

@interface FBKSearchIndex : NSObject {
    int _isSearching;
}

@property (retain) NSManagedObjectContext *managedObjectContext;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)asynchronouslySearchWithQuery:(id)a0 completionHandler:(id /* block */)a1;

@end
