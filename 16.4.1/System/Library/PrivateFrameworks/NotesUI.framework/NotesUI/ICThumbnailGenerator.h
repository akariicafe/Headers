@class NSManagedObjectContext;

@interface ICThumbnailGenerator : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)generateThumbnailWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
