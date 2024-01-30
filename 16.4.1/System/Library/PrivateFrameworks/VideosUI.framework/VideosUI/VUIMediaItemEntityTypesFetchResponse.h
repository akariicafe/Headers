@class NSOrderedSet;

@interface VUIMediaItemEntityTypesFetchResponse : NSObject

@property (copy, nonatomic) NSOrderedSet *mediaItemEntityTypes;
@property (nonatomic, getter=areLocalMediaItemsAvailable) BOOL localMediaItemsAvailable;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_updateWithResponse:(id)a0 changes:(id)a1 replaceContentsOnNilChanges:(BOOL)a2;

@end
