@interface CVNLPLexiconCursor : NSObject <NSCopying>

@property (readonly, nonatomic) const struct _LXCursor { } *cursor;
@property (readonly, nonatomic) unsigned long long priority;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initByAdvancingCursor:(id)a0 withString:(id)a1;
- (id)initWithCursor:(struct _LXCursor { } *)a0 priority:(unsigned long long)a1;
- (id)newCursorByAdvancingWithString:(id)a0;
- (double)cursorConditionalLogProbability;

@end
