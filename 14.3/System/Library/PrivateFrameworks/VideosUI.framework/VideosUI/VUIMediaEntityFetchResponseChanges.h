@class VUICollectionChangeSet;

@interface VUIMediaEntityFetchResponseChanges : NSObject

@property (retain, nonatomic) VUICollectionChangeSet *mediaEntitiesChangeSet;
@property (retain, nonatomic) VUICollectionChangeSet *groupingChangeSet;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaEntitiesChangeSet:(id)a0;

@end
