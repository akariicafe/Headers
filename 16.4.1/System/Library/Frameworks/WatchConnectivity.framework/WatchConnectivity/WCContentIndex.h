@class NSArray, NSSet, NSURL, NSOperationQueue, NSMutableArray, NSString;

@interface WCContentIndex : NSObject <NSFilePresenter>

@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSURL *itemURL;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *cachedContentIndex;
@property (retain, nonatomic) id lastGenerationIdentifier;
@property (readonly, copy, nonatomic) NSArray *index;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commit;
- (void)presentedItemDidMoveToURL:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)presentedItemDidChange;
- (void)addContentIdentifier:(id)a0;
- (id)initWithContainingFolder:(id)a0;
- (void)loadContentIfNecessary;
- (void)removeContentIdentifier:(id)a0;

@end
