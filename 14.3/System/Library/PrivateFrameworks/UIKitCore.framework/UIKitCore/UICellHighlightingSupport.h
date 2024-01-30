@interface UICellHighlightingSupport : NSObject {
    struct __CFDictionary { } *_unhighlightedStates;
    id _cell;
}

- (id)initWithCell:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)highlightView:(id)a0;
- (void)cacheState:(unsigned long long)a0 forView:(id)a1;
- (void)applyState:(unsigned long long)a0 toView:(id)a1;

@end
