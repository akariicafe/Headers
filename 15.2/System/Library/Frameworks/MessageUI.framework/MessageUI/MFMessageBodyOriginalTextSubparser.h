@class NSMutableArray;
@protocol MFMessageBodyElement_Private;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {
    NSMutableArray *_lastTextElements;
    id<MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
    id /* block */ _foundTextBlock;
    id /* block */ _foundWhitespaceBlock;
    BOOL _foundText;
    BOOL _foundForwardSeparator;
}

- (void)dealloc;
- (void)copyBlocks;
- (void)_consumeTextElement:(id)a0 isAttribution:(BOOL)a1;
- (void)_consumeAnyLastTextElementAsAttribution:(BOOL)a0;
- (void)setFoundTextBlock:(id /* block */)a0;
- (void)setFoundWhitespaceBlock:(id /* block */)a0;
- (void)messageBodyParser:(id)a0 foundMessageBodyElement:(id)a1;
- (void)messageBodyParserDidFinishParsing:(id)a0;

@end
