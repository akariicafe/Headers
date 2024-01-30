@class NSArray;

@interface NUChoicePattern : NUPattern

@property (readonly) NSArray *choices;

- (id)tokens;
- (id)stringRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithChoices:(id)a0;
- (BOOL)isEqualToChoicePattern:(id)a0;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
