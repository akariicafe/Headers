@class NSArray, NSFetchedResultsController, NSString;
@protocol STGroupFetchedResultsControllerDelegate;

@interface STGroupFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate>

@property (retain, nonatomic) NSFetchedResultsController *resultsController;
@property (retain, nonatomic) NSArray *resultsControllers;
@property (retain, nonatomic) NSArray *resultsRequests;
@property (nonatomic) unsigned long long changeCounter;
@property (weak, nonatomic) id<STGroupFetchedResultsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 resultsRequests:(id)a1;
- (void)controllerWillChangeContent:(id)a0;
- (void)_evaluateCounter;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;
- (id)initWithResultsRequests:(id)a0 cacheName:(id)a1 managedObjectContext:(id)a2;

@end
