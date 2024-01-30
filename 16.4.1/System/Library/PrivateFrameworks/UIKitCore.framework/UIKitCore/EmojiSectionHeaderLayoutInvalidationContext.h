@class NSMutableIndexSet;

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    struct __CFDictionary { } *_headerWidthDict;
}

@property (readonly, nonatomic) NSMutableIndexSet *invalidatedSections;

- (double)preferredWidthForHeaderInSection:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
