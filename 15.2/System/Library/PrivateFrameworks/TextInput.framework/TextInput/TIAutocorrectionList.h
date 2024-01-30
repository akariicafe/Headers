@class NSArray, TIKeyboardCandidate;

@interface TIAutocorrectionList : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL containsProactiveTriggers;
@property (nonatomic) BOOL proactiveSuggestionsEmpty;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (readonly, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) NSArray *emojiList;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) BOOL hasSupplementalCandidates;
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrectionIfSupplemental;
@property (readonly, nonatomic) NSArray *predictionsIfSupplemental;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) BOOL shouldAcceptTopCandidate;

+ (id)listWithPredictions:(id)a0 emojiList:(id)a1 proactiveTriggers:(id)a2;
+ (id)autocorrectionListWithCandidates:(id)a0 shouldAcceptTopCandidate:(BOOL)a1;
+ (id)listWithAutocorrection:(id)a0;
+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1;
+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1 emojiList:(id)a2;
+ (id)listWithPredictions:(id)a0 proactiveTriggers:(id)a1;
+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3;

- (id)initWithAutocorrectionAlternativeProactiveTrigger:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAutocorrection:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3;
- (id)initWithCandidates:(id)a0;
- (id)initWithCandidates:(id)a0 shouldAcceptTopCandidate:(BOOL)a1;
- (BOOL)hasSupplementalItems;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
