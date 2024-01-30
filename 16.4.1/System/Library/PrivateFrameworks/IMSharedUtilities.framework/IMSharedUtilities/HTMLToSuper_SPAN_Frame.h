@interface HTMLToSuper_SPAN_Frame : HTMLToSuper_Default_Frame {
    BOOL _shouldPopFontFamily;
    BOOL _shouldDecrementBoldCount;
    BOOL _shouldDecrementItalicCount;
    BOOL _shouldDecrementUnderlineCount;
    BOOL _shouldDecrementStrikeCount;
}

- (void)parser:(id)a0 context:(id)a1 didEndElement:(id)a2 namespaceURI:(id)a3 qualifiedName:(id)a4;
- (void)parser:(id)a0 context:(id)a1 didStartElement:(id)a2 namespaceURI:(id)a3 qualifiedName:(id)a4 attributes:(id)a5;

@end
