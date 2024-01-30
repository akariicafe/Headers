@class NSRegularExpression, NSString;
@protocol WFPythonHTMLParserDelegate;

@interface WFPythonHTMLParser : NSObject

@property (retain, nonatomic) NSRegularExpression *interestingExpression;
@property (readonly, nonatomic) NSRegularExpression *incompleteExpression;
@property (readonly, nonatomic) NSRegularExpression *entityrefExpression;
@property (readonly, nonatomic) NSRegularExpression *charrefExpression;
@property (readonly, nonatomic) NSRegularExpression *startTagOpenExpression;
@property (readonly, nonatomic) NSRegularExpression *commentCloseExpression;
@property (readonly, nonatomic) NSRegularExpression *tagFindExpression;
@property (readonly, nonatomic) NSRegularExpression *attributeFindExpression;
@property (readonly, nonatomic) NSRegularExpression *locateStartTagEndExpression;
@property (readonly, nonatomic) NSRegularExpression *endEndTagExpression;
@property (readonly, nonatomic) NSRegularExpression *endTagFindExpression;
@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *cdataElement;
@property (nonatomic) long long currentLineNumber;
@property (nonatomic) long long currentOffset;
@property (weak, nonatomic) id<WFPythonHTMLParserDelegate> delegate;

- (void)close;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)handleData:(id)a0;
- (long long)checkForWholeStartTag:(long long)a0;
- (void)feed:(id)a0;
- (void)handleCharacterRef:(id)a0;
- (void)handleComment:(id)a0;
- (void)handleDoctypeDeclaration:(id)a0;
- (void)handleEndTag:(id)a0;
- (void)handleEntityRef:(id)a0;
- (void)handleProcessingInstruction:(id)a0;
- (void)handleStartEndTag:(id)a0 attributes:(id)a1;
- (void)handleStartTag:(id)a0 attributes:(id)a1;
- (void)handleUnknownDeclaration:(id)a0;
- (long long)parseBogusComment:(long long)a0;
- (long long)parseComment:(long long)a0;
- (void)parseDataAndEnd:(BOOL)a0;
- (long long)parseEndTag:(long long)a0;
- (long long)parseHTMLDeclaration:(long long)a0;
- (long long)parseMarkedSection:(long long)a0;
- (long long)parseProcessingInstruction:(long long)a0;
- (long long)parseStartTag:(long long)a0;
- (id)scanName:(long long)a0 declarationStartPosition:(long long)a1 location:(long long *)a2;
- (long long)updatePosition:(long long)a0 j:(long long)a1;

@end
