@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

@interface REScriptParser : NSObject {
    id<REBacktrackingTokenBuffer> _buffer;
}

@property (weak, nonatomic) id<REScriptParserDelegate> delegate;

- (id)parse;
- (void).cxx_destruct;
- (id)initWithBacktrackingBuffer:(id)a0;

@end
