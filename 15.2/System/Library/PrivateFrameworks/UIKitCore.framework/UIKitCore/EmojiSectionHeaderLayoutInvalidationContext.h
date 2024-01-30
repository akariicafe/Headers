@class NSMutableIndexSet;

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    struct __CFDictionary { } *_headerWidthDict;
}

@property (readonly, nonatomic) NSMutableIndexSet *invalidatedSections;

- (void)dealloc;
- (double)preferredWidthForHeaderInSection:(long long)a0;

@end
