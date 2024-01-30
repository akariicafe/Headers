@class NSArray;

@interface ASASelectorControl : ASAControl

@property (nonatomic) unsigned int currentItem;
@property (nonatomic) NSArray *currentItems;
@property (readonly, copy, nonatomic) NSArray *availableItems;

- (unsigned int)currentItem;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)setCurrentItem:(unsigned int)a0;
- (id)availableItems;
- (id)coreAudioClassName;
- (id)nameForItem:(unsigned int)a0;

@end
