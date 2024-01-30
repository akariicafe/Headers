@class NSArray;

@interface NUChoicePattern : NUPattern

@property (readonly) NSArray *choices;

- (id)stringRepresentation;
- (id)tokens;
- (void).cxx_destruct;
- (id)init;
- (id)initWithChoices:(id)a0;
- (BOOL)isFixedOrder;
- (id)shortestMatch;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isEqualToChoicePattern:(id)a0;

@end
