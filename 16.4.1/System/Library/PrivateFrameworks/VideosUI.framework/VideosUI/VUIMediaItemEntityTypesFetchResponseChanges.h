@class VUICollectionChangeSet;

@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject

@property (readonly, nonatomic) VUICollectionChangeSet *mediaItemEntityTypesChangeSet;
@property (readonly, nonatomic) BOOL localMediaItemsAvailableDidChange;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaItemEntityTypesChangeSet:(id)a0 localMediaItemsAvailableDidChange:(BOOL)a1;

@end
