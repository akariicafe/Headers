@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {
    NSScanner *_scanner;
}

- (BOOL)parse;
- (void)_consumeNodesFromNode:(id)a0 upToNode:(id)a1;
- (BOOL)_isMilestoneTagName:(id)a0;
- (id)initWithHTML:(id)a0;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;
- (void)dealloc;
- (void)_findBody;
- (void)didFindError:(id)a0;

@end
