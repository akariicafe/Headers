@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)tokens;
- (id)init;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (id)stringRepresentation;
- (id)shortestMatch;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)isEqualToTokenPattern:(id)a0;

@end
