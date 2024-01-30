@class NSString, TSTReferenceNode, TSUColor;
@protocol TSTCanvasReferenceProvider;

@interface TSTCompletionToken : TSTWPTokenAttachment

@property (retain, nonatomic) NSString *completionText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } prefixRange;
@property (readonly, nonatomic) int renderAsTokenType;
@property (retain, nonatomic) TSTReferenceNode *editingReferenceNode;
@property (retain, nonatomic) TSUColor *referenceColor;
@property (weak, nonatomic) id<TSTCanvasReferenceProvider> canvasReferenceProvider;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tokenText;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 expressionNode:(id)a1;
- (id)copyIntoContext:(id)a0 bakeModes:(BOOL)a1;
- (void)setExpressionNode:(id)a0;
- (void)p_removeCanvasReference;
- (void)p_createCanvasReference;
- (id)initWithContext:(id)a0 completionText:(id)a1;
- (void)makeTokenReflectChoice:(id)a0;

@end
