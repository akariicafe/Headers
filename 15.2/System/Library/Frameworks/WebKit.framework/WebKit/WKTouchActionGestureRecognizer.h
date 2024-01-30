@protocol WKTouchActionGestureRecognizerDelegate;

@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits> { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction>>>, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>>::KeyValuePairTraits, WTF::HashTraits<unsigned int>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _touchActionsByTouchIdentifier;
    id<WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;
}

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)a0;
- (void)setTouchActions:(struct OptionSet<WebCore::TouchAction> { unsigned char x0; })a0 forTouchIdentifier:(unsigned int)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithTouchActionDelegate:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id).cxx_construct;
- (void)_updateState;

@end
