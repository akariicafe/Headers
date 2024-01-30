@interface UICellHighlightingSupport : NSObject {
    struct __CFDictionary { } *_unhighlightedStates;
    id _cell;
}

- (void)applyState:(unsigned long long)a0 toView:(id)a1;
- (void).cxx_destruct;
- (void)cacheState:(unsigned long long)a0 forView:(id)a1;
- (id)initWithCell:(id)a0;
- (void)dealloc;
- (void)highlightView:(id)a0;

@end
