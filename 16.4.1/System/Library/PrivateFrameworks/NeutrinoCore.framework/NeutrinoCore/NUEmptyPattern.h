@interface NUEmptyPattern : NUPattern

- (BOOL)isEmpty;
- (id)tokens;
- (id)stringRepresentation;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
