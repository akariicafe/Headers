@class MSPContainer;

@interface MSPCollectionsContainer : MSPContainer

@property (retain, nonatomic) MSPContainer *itemContainer;

+ (id)sharedRemoteContainer;
+ (id)sharedLocalContainer;

- (id)initWithPersister:(id)a0 itemContainer:(id)a1;
- (void).cxx_destruct;
- (id)queryWithDelegate:(id)a0;

@end
