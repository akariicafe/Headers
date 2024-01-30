@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer

@property (retain, nonatomic) MSPContainer *itemContainer;

+ (id)sharedLocalContainer;
+ (id)sharedRemoteContainer;

- (void).cxx_destruct;
- (id)queryWithDelegate:(id)a0;
- (id)initWithPersister:(id)a0 itemContainer:(id)a1;

@end
