@class NSOrderedSet;

@interface VUIMediaItemEntityTypesFetchResponse : NSObject

@property (copy, nonatomic) NSOrderedSet *mediaItemEntityTypes;
@property (nonatomic, getter=areLocalMediaItemsAvailable) BOOL localMediaItemsAvailable;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_updateWithResponse:(id)a0 changes:(id)a1 replaceContentsOnNilChanges:(BOOL)a2;

@end
