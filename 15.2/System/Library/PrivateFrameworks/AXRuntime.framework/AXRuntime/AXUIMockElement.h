@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement <NSCopying> {
    NSMutableDictionary *_writableAttributes;
    NSMutableDictionary *_performActionLog;
}

@property (retain, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) BOOL isApplication;
@property (nonatomic) BOOL usesCarriageReturnAsLinesSeparator;
@property (copy, nonatomic) id /* block */ handleActionBlock;
@property (copy, nonatomic) id /* block */ cacheUpdatedCallback;

+ (void)applyElementAttributeCacheScheme:(unsigned long long)a0;
+ (id)uiElementAtCoordinate:(struct CGPoint { double x0; double x1; })a0;

- (id)_valueForAttribute:(long long)a0;
- (BOOL)performAXAction:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)disableCache;
- (unsigned long long)hash;
- (int)pid;
- (BOOL)isValid;
- (void)setValue:(id)a0 forAXAttribute:(long long)a1;
- (void)startLoggingActions;
- (id)endLoggingActions;
- (id)stringWithAXAttribute:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithAXAttribute:(long long)a0;
- (id)numberWithAXAttribute:(long long)a0;
- (struct CGPoint { double x0; double x1; })pointWithAXAttribute:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithAXAttribute:(long long)a0;
- (id)objectWithAXAttribute:(long long)a0 parameter:(void *)a1;
- (id)objectWithAXAttribute:(long long)a0;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canSetAXAttribute:(long long)a0;
- (BOOL)isMockElement;
- (const struct __AXUIElement { } *)axElement;
- (id)visibleElements;
- (id)performBlockWhileLoggingPerformedActions:(id /* block */)a0;
- (void)enableCache:(BOOL)a0;
- (void)setWritable:(BOOL)a0 forAXAttribute:(long long)a1;
- (id)uiElementWithAXAttribute:(long long)a0;
- (BOOL)canPerformAXAction:(int)a0;
- (void)setValue:(id)a0 forAXParameterizedAttribute:(long long)a1;
- (id)arrayWithAXAttribute:(long long)a0;
- (BOOL)boolWithAXAttribute:(long long)a0;
- (float)floatWithAXAttribute:(long long)a0;
- (long long)longWithAXAttribute:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeWithAXAttribute:(long long)a0;
- (const struct CGPath { } *)pathWithAXAttribute:(long long)a0;
- (id)urlWithAXAttribute:(long long)a0;
- (id)uiElementArrayForAXAttribute:(long long)a0;
- (unsigned long long)arrayCountWithAXAttribute:(long long)a0;
- (void)fillStaticCache;
- (id)cachedAttributes;
- (id)copyCachedAttributes;
- (id)uiElementsWithAttribute:(long long)a0;
- (id)uiElementsWithAttribute:(long long)a0 parameter:(void *)a1;
- (BOOL)performAXAction:(int)a0 withValue:(id)a1;
- (BOOL)performAXAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (id)previousElementsWithCount:(unsigned long long)a0;
- (id)nextElementsWithCount:(unsigned long long)a0;
- (id)nextElementsWithParameters:(id)a0;
- (id)previousElementsWithParameters:(id)a0;
- (id)uiElementsWithAttribute:(long long)a0 parameter:(void *)a1 fetchAttributes:(BOOL)a2;
- (BOOL)isValidForApplication:(id)a0;
- (void)updateCacheWithAttributes:(id)a0;
- (void)updateCache:(long long)a0;
- (void)setAXAttribute:(long long)a0 withBOOL:(BOOL)a1;
- (void)setAXAttribute:(long long)a0 withString:(id)a1;
- (void)setAXAttribute:(long long)a0 withLong:(long long)a1;
- (void)setAXAttribute:(long long)a0 withFloat:(float)a1;
- (void)setAXAttribute:(long long)a0 withNumber:(id)a1;
- (void)setAXAttribute:(long long)a0 withPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setAXAttribute:(long long)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)setAXAttribute:(long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAXAttribute:(long long)a0 withUIElement:(id)a1;
- (void)setAXAttribute:(long long)a0 withUIElementArray:(id)a1;
- (void)setAXAttribute:(long long)a0 withArray:(id)a1;
- (void)setAXAttribute:(long long)a0 withObject:(id)a1;
- (void)setAXAttribute:(long long)a0 withObject:(id)a1 synchronous:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })pointForLineNumber:(unsigned long long)a0;

@end
