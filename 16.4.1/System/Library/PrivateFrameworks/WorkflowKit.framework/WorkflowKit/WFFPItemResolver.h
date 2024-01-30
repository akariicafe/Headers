@class NSString, FPItemCollection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WFFPItemResolver : NSObject <FPItemCollectionMinimalDelegate>

@property (retain, nonatomic) FPItemCollection *collection;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableArray *mutableComponents;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)collectionDidFinishGathering:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)determineNextItemIfPossible;
- (id)initWithDomainID:(id)a0 relativeSubpath:(id)a1 completionHandler:(id /* block */)a2;
- (void)startObservingFolderItemCollection:(id)a0;

@end
