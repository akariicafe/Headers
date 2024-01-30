@class SMSTextPart, NSMutableArray;

@interface SMSToSuperParserContext : IMHTMLToSuperParserContext {
    SMSTextPart *_currentTextPart;
}

@property (readonly, retain, nonatomic) NSMutableArray *orderedParts;

- (id)name;
- (void)dealloc;
- (void)_addPart:(id)a0;

@end
