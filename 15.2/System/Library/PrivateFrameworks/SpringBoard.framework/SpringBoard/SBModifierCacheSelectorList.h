@interface SBModifierCacheSelectorList : NSObject {
    long long selCount;
    SEL *sels;
}

- (id)initWithSelectors:(SEL *)a0 count:(long long)a1;

@end
