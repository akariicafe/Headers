@class NSOrderedSet;

@interface NMSMediaDownloadInfo : NSObject

@property (readonly, nonatomic) NSOrderedSet *items;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)a0;
- (id)mediaItemIdentifiers;

@end
