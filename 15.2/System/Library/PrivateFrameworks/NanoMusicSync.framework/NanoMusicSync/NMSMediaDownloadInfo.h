@class NSOrderedSet;

@interface NMSMediaDownloadInfo : NSObject

@property (readonly, nonatomic) NSOrderedSet *items;

- (id)initWithItems:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (id)mediaLibraryItemIdentifiers;
- (id)externalLibraryItemIdentifiers;

@end
