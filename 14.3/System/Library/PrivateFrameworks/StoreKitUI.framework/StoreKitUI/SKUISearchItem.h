@class NSArray, NSMutableDictionary, SKUIScreenshot;

@interface SKUISearchItem : SKUIItem {
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}

@property (readonly, nonatomic) SKUIScreenshot *primaryScreenshot;
@property (readonly, nonatomic) NSArray *screenshots;

- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)a0;
- (id)childItemIdentifiers;
- (id)loadedChildItems;
- (id)childItemForIdentifier:(id)a0;
- (void)setChildItem:(id)a0 forIdentifier:(id)a1;

@end
