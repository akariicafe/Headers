@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject {
    NSMutableArray *_strings;
    NSMutableArray *_selectors;
}

- (void).cxx_destruct;
- (id)init;
- (void)setSelector:(SEL)a0 forString:(id)a1;
- (SEL)selectorForString:(id)a0;

@end
