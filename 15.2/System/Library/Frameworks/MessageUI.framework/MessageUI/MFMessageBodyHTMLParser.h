@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {
    NSScanner *_scanner;
}

- (void)dealloc;
- (BOOL)parse;
- (void)_findBody;
- (void)_consumeNodesFromNode:(id)a0 upToNode:(id)a1;
- (void)didFindError:(id)a0;
- (BOOL)_isMilestoneTagName:(id)a0;
- (id)initWithHTML:(id)a0;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;

@end
