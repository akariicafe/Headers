@class NSMutableAttributedString, NSString, NSMutableDictionary, NSAttributedString, NSMutableArray;

@interface IMToSuperParserContext : IMXMLParserContext {
    unsigned long long _underlineCount;
    unsigned long long _boldCount;
    unsigned long long _italicCount;
    unsigned long long _strikethroughCount;
    unsigned long long _messagePartNumber;
    NSMutableArray *_fontFamilyStack;
    NSMutableArray *_fontSizeStack;
    NSMutableArray *_linkStack;
    NSMutableArray *_backgroundColorStack;
    NSMutableArray *_foregroundColorStack;
    NSMutableDictionary *_currentAttributes;
    BOOL _didAddBodyAttributes;
    NSMutableAttributedString *_body;
}

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *foregroundColor;
@property (readonly, nonatomic) NSAttributedString *body;
@property (retain, nonatomic) NSMutableArray *fileTransferGUIDs;
@property long long baseWritingDirection;

- (void)appendString:(id)a0;
- (void)dealloc;
- (void)reset;
- (id)name;
- (void)_updateFontSize;
- (void)popLink;
- (void)pushFontFamily:(id)a0;
- (void)_clearIvars;
- (void)_incrementMessagePartNumber;
- (void)_initIvars;
- (void)_popValueFromStack:(id)a0 attributeName:(id)a1;
- (void)_pushValue:(id)a0 ontoStack:(id)a1 attributeName:(id)a2;
- (void)_updateFontFamily;
- (void)appendBreadcrumbText:(id)a0 withOptions:(unsigned int)a1;
- (void)appendFileTransferWithGUID:(id)a0;
- (void)appendInlineImageWithGUID:(id)a0 filename:(id)a1 width:(long long)a2 height:(long long)a3;
- (void)appendInlineImageWithGUID:(id)a0 filename:(id)a1 width:(long long)a2 height:(long long)a3 emoji:(long long)a4;
- (void)decrementBoldCount;
- (void)decrementItalicCount;
- (void)decrementStrikethroughCount;
- (void)decrementUnderlineCount;
- (void)incrementBoldCount;
- (void)incrementItalicCount;
- (void)incrementStrikethroughCount;
- (void)incrementUnderlineCount;
- (void)popBackgroundColor;
- (void)popFontFamily;
- (void)popFontSize;
- (void)popForegroundColor;
- (void)pushBackgroundColor:(id)a0;
- (void)pushFontSize:(id)a0;
- (void)pushForegroundColor:(id)a0;
- (void)pushLink:(id)a0;
- (id)resultsForLogging;

@end
