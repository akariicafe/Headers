@class NSMutableArray;
@protocol ECMessageBodyElement_Private;

@interface ECMessageBodyOriginalTextSubparser : ECMessageBodySubparser {
    NSMutableArray *_lastTextElements;
    id<ECMessageBodyElement_Private> _lastNonWhitespaceTextElement;
    id /* block */ _foundTextBlock;
    id /* block */ _foundWhitespaceBlock;
    BOOL _foundText;
    BOOL _foundForwardSeparator;
}

- (void)dealloc;
- (void)_consumeAnyLastTextElementAsAttribution:(BOOL)a0;
- (void)_consumeTextElement:(id)a0 isAttribution:(BOOL)a1;
- (void)messageBodyParser:(id)a0 foundMessageBodyElement:(id)a1;
- (void)messageBodyParserDidFinishParsing:(id)a0;
- (void)setFoundTextBlock:(id /* block */)a0;
- (void)setFoundWhitespaceBlock:(id /* block */)a0;

@end
