@interface NUEmptyPattern : NUPattern

- (id)tokens;
- (BOOL)isEmpty;
- (id)stringRepresentation;
- (id)shortestMatch;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;

@end
