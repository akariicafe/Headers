@class NSArray, NSMutableArray;

@interface MCKeyboardInput : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableArray *mutableInputs;
@property (nonatomic) unsigned long long composingInputIndex;
@property (readonly, nonatomic) NSArray *inputs;
@property (retain, nonatomic) MCKeyboardInput *composingInput;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canComposeNew:(id)a0;
- (void)composeNew:(id)a0;
- (void)removeAllInputs;
- (void)removeComposingInput;
- (void)removeInputAtIndex:(unsigned long long)a0;
- (void)replaceInputAtIndex:(unsigned long long)a0 with:(id)a1;
- (void)replaceComposingInputWith:(id)a0;
- (void)insertInput:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)hasKindOf:(Class)a0;
- (BOOL)hasDrawInput;
- (id)asInlineText;
- (id)asCommittedText;
- (unsigned long long)asInlineTextCursorIndex;
- (BOOL)hasRemainingComposingInput;
- (id)asSearchString;
- (id)asMecabraGestures:(BOOL *)a0;
- (void)_addNearbyKeys:(id)a0 to:(void *)a1;
- (id)_asInputStringWithCursorIndex:(unsigned long long *)a0 remainingComposingInputIndex:(unsigned long long *)a1 typeInputs:(id)a2 forSearch:(BOOL)a3 suffix:(id)a4;

@end
