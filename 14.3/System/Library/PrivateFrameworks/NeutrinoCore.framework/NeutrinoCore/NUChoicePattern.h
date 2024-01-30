@class NSArray;

@interface NUChoicePattern : NUPattern

@property (readonly) NSArray *choices;

- (id)tokens;
- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithChoices:(id)a0;
- (id)shortestMatch;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)isEqualToChoicePattern:(id)a0;

@end
