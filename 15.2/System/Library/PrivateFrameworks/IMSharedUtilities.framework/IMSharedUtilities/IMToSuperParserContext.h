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

- (void)popLink;
- (void)appendString:(id)a0;
- (id)name;
- (void)pushLink:(id)a0;
- (void)dealloc;
- (void)reset;
- (id)resultsForLogging;
- (void)incrementBoldCount;
- (void)decrementBoldCount;
- (void)incrementItalicCount;
- (void)decrementItalicCount;
- (void)pushFontFamily:(id)a0;
- (void)pushFontSize:(id)a0;
- (void)popFontFamily;
- (void)popFontSize;
- (void)incrementStrikethroughCount;
- (void)decrementStrikethroughCount;
- (void)incrementUnderlineCount;
- (void)decrementUnderlineCount;
- (void)appendBreadcrumbText:(id)a0 withOptions:(unsigned int)a1;
- (void)_clearIvars;
- (void)_initIvars;
- (void)_updateFontFamily;
- (void)_updateFontSize;
- (void)_pushValue:(id)a0 ontoStack:(id)a1 attributeName:(id)a2;
- (void)_popValueFromStack:(id)a0 attributeName:(id)a1;
- (void)appendInlineImageWithGUID:(id)a0 filename:(id)a1 width:(long long)a2 height:(long long)a3 emoji:(long long)a4;
- (void)_incrementMessagePartNumber;
- (void)popBackgroundColor;
- (void)pushBackgroundColor:(id)a0;
- (void)pushForegroundColor:(id)a0;
- (void)popForegroundColor;
- (void)appendFileTransferWithGUID:(id)a0;
- (void)appendInlineImageWithGUID:(id)a0 filename:(id)a1 width:(long long)a2 height:(long long)a3;

@end
