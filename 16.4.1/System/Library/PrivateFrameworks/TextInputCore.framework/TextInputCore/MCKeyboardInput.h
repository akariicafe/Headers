@class MCKeyboardState, NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *mutableInputs;
@property (nonatomic) unsigned long long composingInputIndex;
@property (readonly, nonatomic) NSArray *inputs;
@property (retain, nonatomic) MCKeyboardInput *composingInput;
@property (readonly, nonatomic) MCKeyboardState *sourceKeyboardState;

- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)asCommittedText;
- (void)removeAllInputs;
- (void)_addNearbyKeys:(id)a0 to:(void *)a1 likelihoodThreshold:(float)a2;
- (id)_asInputStringWithCursorIndex:(unsigned long long *)a0 remainingComposingInputIndex:(unsigned long long *)a1 typeInputs:(id)a2 forSearch:(BOOL)a3 suffix:(id)a4;
- (id)asInlineText;
- (unsigned long long)asInlineTextCursorIndex;
- (id)asMecabraGestures:(BOOL *)a0;
- (id)asSearchString;
- (BOOL)canComposeNew:(id)a0;
- (void)composeNew:(id)a0;
- (BOOL)hasDrawInput;
- (BOOL)hasKindOf:(Class)a0;
- (BOOL)hasRemainingComposingInput;
- (id)initWithSourceKeyboardState:(id)a0;
- (void)insertInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeComposingInput;
- (void)removeInputAtIndex:(unsigned long long)a0;
- (void)replaceComposingInputWith:(id)a0;
- (void)replaceInputAtIndex:(unsigned long long)a0 with:(id)a1;
- (id)shortDescriptionWithLeadingString:(id)a0;

@end
