@class NSSet;

@interface HFSimpleItemModule : HFItemModule

@property (copy, nonatomic) id /* block */ sectionBuilder;
@property (retain, nonatomic) NSSet *itemProviders;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 itemProviders:(id)a1 sectionBuilder:(id /* block */)a2;

@end
