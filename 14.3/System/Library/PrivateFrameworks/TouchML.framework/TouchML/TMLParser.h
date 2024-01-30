@class NSString, TMLMetaObject, NSMutableSet, TMLMetaContext, NSMutableArray, NSMutableDictionary;

@interface TMLParser : NSObject {
    TMLMetaContext *_context;
    unsigned long long _state;
    NSString *_lastIdent;
    BOOL _methodDeclaration;
    NSString *_declarationType;
    NSMutableSet *_declarationAttributes;
    NSString *_methodSelector;
    NSMutableArray *_activeTokens;
    TMLMetaObject *_activeObject;
    NSMutableArray *_objectStack;
    NSString *_filename;
    unsigned int _lineNo;
    NSString *_basePath;
    NSMutableDictionary *_macros;
    NSMutableSet *_preprocessorMacros;
    NSMutableSet *_functionIdentifiers;
    BOOL _lookaheadInFunction;
    NSString *_lookaheadCurrentIdent;
    BOOL _lookaheadOnly;
    BOOL _lookaheadComplete;
}

@property (nonatomic) BOOL strict;
@property (readonly, nonatomic) NSString *error;

+ (id)unescapeString:(id)a0;
+ (id)transformObjectCreation:(id)a0;
+ (id)transformFunction:(id)a0;
+ (id)previousNonSpaceToken:(id)a0;
+ (id)varsInCurrentScope:(id)a0;
+ (BOOL)isBuiltinObject:(id)a0;
+ (id)transformAccessors:(id)a0;
+ (id)transformBreakpoints:(id)a0 lineNo:(int)a1 filename:(id)a2;

- (void)setup;
- (id)initWithContext:(id)a0;
- (void)teardown;
- (void).cxx_destruct;
- (BOOL)parseString:(id)a0;
- (BOOL)parseFunctionLookaheadWithFile:(id)a0;
- (BOOL)consumeToken:(unsigned long long)a0 text:(const char *)a1;
- (BOOL)parseString:(id)a0 basePath:(id)a1;
- (BOOL)parseString:(id)a0 basePath:(id)a1 filename:(id)a2;
- (BOOL)parseFunctionLookaheadWithString:(id)a0 basePath:(id)a1 filename:(id)a2;
- (unsigned long long)blockValueDepth;
- (void)addToken:(unsigned long long)a0 text:(const char *)a1;
- (void)commitObject;
- (void)commitProperty;
- (void)commitMethod;
- (void)commitSignal;
- (void)commitInitializer;
- (void)commitImplements;
- (void)commitFunction;
- (void)commitPragma;
- (void)commitMacro;
- (id)compileExpression:(id)a0;
- (id)compileFunction:(id)a0 bodyOnly:(BOOL)a1 localVars:(id)a2;
- (id)compileFunction:(id)a0 bodyOnly:(BOOL)a1;
- (BOOL)parseFile:(id)a0;
- (BOOL)parseTokens:(id)a0 startingLine:(unsigned long long)a1;
- (void)addPreprocessorMacro:(id)a0;

@end
