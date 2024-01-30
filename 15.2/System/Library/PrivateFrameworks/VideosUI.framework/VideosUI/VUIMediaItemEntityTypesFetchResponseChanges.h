@class VUICollectionChangeSet;

@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject

@property (readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet;
@property (readonly, nonatomic) BOOL localMediaItemsAvailableDidChange;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaItemEntityTypesChangeSet:(id)a0 localMediaItemsAvailableDidChange:(BOOL)a1;

@end
