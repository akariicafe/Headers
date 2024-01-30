@interface HUSideBarStaticItem : HFStaticItem

@property (readonly, nonatomic) unsigned long long type;

- (id)resultDictionary;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSideBarStaticItemType:(unsigned long long)a0;

@end
