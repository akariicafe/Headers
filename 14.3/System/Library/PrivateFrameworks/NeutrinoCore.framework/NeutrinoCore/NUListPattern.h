@class NSArray;

@interface NUListPattern : NUPattern

@property (readonly) NSArray *list;

- (id)tokens;
- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithList:(id)a0;
- (id)shortestMatch;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)isEqualToListPattern:(id)a0;

@end
