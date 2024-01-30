@class NSMutableArray;

@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray *_tabs;
}

+ (id)tabs;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)description;
- (id)tabAtIndex:(unsigned long long)a0;
- (void)insertTab:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithTabs:(id)a0;
- (id)tabAtPosition:(double)a0;
- (id)tabAfterPosition:(double)a0;
- (void)removeTabAtIndex:(unsigned long long)a0;
- (void)setPosition:(double)a0 forTab:(id)a1;
- (unsigned long long)indexForTabWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;

@end
