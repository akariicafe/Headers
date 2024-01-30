@protocol WKTouchActionGestureRecognizerDelegate;

@interface WKTouchActionGestureRecognizer : UIGestureRecognizer {
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction> > > { struct HashTable<unsigned int, WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction> > >, WTF::DefaultHash<unsigned int>, WTF::HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction> > >::KeyValuePairTraits, WTF::HashTraits<unsigned int> > { struct KeyValuePair<unsigned int, WTF::OptionSet<WebCore::TouchAction> > *m_table; } m_impl; } _touchActionsByTouchIdentifier;
    id<WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_updateState;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id).cxx_construct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)a0;
- (id)initWithTouchActionDelegate:(id)a0;
- (void)setTouchActions:(struct OptionSet<WebCore::TouchAction> { unsigned char x0; })a0 forTouchIdentifier:(unsigned int)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
