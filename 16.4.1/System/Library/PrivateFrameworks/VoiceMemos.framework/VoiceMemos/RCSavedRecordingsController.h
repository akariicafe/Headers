@class NSString, NSArray, NSPredicate, NSFetchRequest;
@protocol RCFolder, NSFetchedResultsControllerDelegate;

@interface RCSavedRecordingsController : NSFetchedResultsController <NSCopying> {
    NSFetchRequest *_fetchRequest;
    BOOL _hasPerformedFetch;
}

@property (weak, nonatomic) id<RCFolder> folder;
@property (weak, nonatomic) id<NSFetchedResultsControllerDelegate> defaultDelegate;
@property (copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) NSArray *fetchedRecordings;
@property (readonly, nonatomic) NSPredicate *fetchPredicate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;
- (void)setDelegate:(id)a0;
- (id)fetchedObjects;
- (void)invalidate;
- (BOOL)performFetch:(id *)a0;
- (void).cxx_destruct;

@end
