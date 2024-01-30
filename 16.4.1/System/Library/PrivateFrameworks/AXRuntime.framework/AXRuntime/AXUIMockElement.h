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
- (int)pid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)disableCache;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)visibleElements;
- (BOOL)performAXAction:(int)a0;
- (void)fillStaticCache;
- (id)previousElementsWithParameters:(id)a0;
- (unsigned long long)_lineNumberForPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)arrayCountWithAXAttribute:(long long)a0;
- (id)arrayWithAXAttribute:(long long)a0;
- (const struct __AXUIElement { } *)axElement;
- (BOOL)boolWithAXAttribute:(long long)a0;
- (id)cachedAttributes;
- (BOOL)canPerformAXAction:(int)a0;
- (BOOL)canSetAXAttribute:(long long)a0;
- (id)copyCachedAttributes;
- (void)enableCache:(BOOL)a0;
- (id)endLoggingActions;
- (float)floatWithAXAttribute:(long long)a0;
- (BOOL)isMockElement;
- (BOOL)isValidForApplication:(id)a0;
- (long long)longWithAXAttribute:(long long)a0;
- (id)nextElementsWithCount:(unsigned long long)a0;
- (id)nextElementsWithParameters:(id)a0;
- (id)numberWithAXAttribute:(long long)a0;
- (id)objectWithAXAttribute:(long long)a0;
- (id)objectWithAXAttribute:(long long)a0 parameter:(void *)a1;
- (const struct CGPath { } *)pathWithAXAttribute:(long long)a0;
- (BOOL)performAXAction:(int)a0 withValue:(id)a1;
- (BOOL)performAXAction:(int)a0 withValue:(id)a1 fencePort:(unsigned int)a2;
- (id)performBlockWhileLoggingPerformedActions:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })pointForLineNumber:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointWithAXAttribute:(long long)a0;
- (id)previousElementsWithCount:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithAXAttribute:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithAXAttribute:(long long)a0;
- (void)setAXAttribute:(long long)a0 withArray:(id)a1;
- (void)setAXAttribute:(long long)a0 withBOOL:(BOOL)a1;
- (void)setAXAttribute:(long long)a0 withFloat:(float)a1;
- (void)setAXAttribute:(long long)a0 withLong:(long long)a1;
- (void)setAXAttribute:(long long)a0 withNumber:(id)a1;
- (void)setAXAttribute:(long long)a0 withObject:(id)a1;
- (void)setAXAttribute:(long long)a0 withObject:(id)a1 synchronous:(BOOL)a2;
- (void)setAXAttribute:(long long)a0 withPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setAXAttribute:(long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAXAttribute:(long long)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)setAXAttribute:(long long)a0 withString:(id)a1;
- (void)setAXAttribute:(long long)a0 withUIElement:(id)a1;
- (void)setAXAttribute:(long long)a0 withUIElementArray:(id)a1;
- (void)setValue:(id)a0 forAXAttribute:(long long)a1;
- (void)setValue:(id)a0 forAXParameterizedAttribute:(long long)a1;
- (void)setWritable:(BOOL)a0 forAXAttribute:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeWithAXAttribute:(long long)a0;
- (void)startLoggingActions;
- (id)stringWithAXAttribute:(long long)a0;
- (id)uiElementArrayForAXAttribute:(long long)a0;
- (id)uiElementWithAXAttribute:(long long)a0;
- (id)uiElementsWithAttribute:(long long)a0;
- (id)uiElementsWithAttribute:(long long)a0 parameter:(void *)a1;
- (id)uiElementsWithAttribute:(long long)a0 parameter:(void *)a1 fetchAttributes:(BOOL)a2;
- (void)updateCache:(long long)a0;
- (void)updateCacheWithAttributes:(id)a0;
- (id)urlWithAXAttribute:(long long)a0;

@end
