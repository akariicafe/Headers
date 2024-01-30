@class NSMutableDictionary, NSMutableArray;

@interface NSISPlaybackOperation : NSObject {
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableArray *variableDelegates;
}

- (void)_addToEngine:(id)a0;
- (id)init;
- (void)dealloc;
- (id)unwrapVariable:(id)a0;
- (id)unwrapLinearExpression:(id)a0 onEngine:(id)a1;
- (void)playbackOneAction:(id)a0 onEngine:(id)a1;

@end
