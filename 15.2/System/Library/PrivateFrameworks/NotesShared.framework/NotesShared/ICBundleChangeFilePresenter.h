@class NSManagedObjectContext, NSSet, ICSelectorDelayer, NSOperationQueue, NSURL, NSString, NSManagedObjectID;

@interface ICBundleChangeFilePresenter : NSObject <NSFilePresenter>

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (copy, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) ICSelectorDelayer *applyChangesSelectorDelayer;
@property (copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (copy, nonatomic) id /* block */ presentedItemDidApplyChanges;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyChanges;
- (void)presentedItemDidChange;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 url:(id)a1 managedObjectContext:(id)a2;

@end
