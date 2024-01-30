@class VUICollectionChangeSet;

@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject

@property (readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet;
@property (readonly, nonatomic) BOOL localMediaItemsAvailableDidChange;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaItemEntityTypesChangeSet:(id)a0 localMediaItemsAvailableDidChange:(BOOL)a1;

@end
