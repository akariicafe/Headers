@class NSString, TSTReferenceNode, TSUColor;
@protocol TSTCanvasReferenceProvider;

@interface TSTCompletionToken : TSTWPTokenAttachment

@property (retain, nonatomic) NSString *completionText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } prefixRange;
@property (readonly, nonatomic) int renderAsTokenType;
@property (retain, nonatomic) TSTReferenceNode *editingReferenceNode;
@property (retain, nonatomic) TSUColor *referenceColor;
@property (weak, nonatomic) id<TSTCanvasReferenceProvider> canvasReferenceProvider;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)tokenText;
- (void)loadFromArchive:(const struct CompletionTokenAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct TokenAttachmentArchive *x5; unsigned int x6; unsigned int x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CompletionTokenAttachmentArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct TokenAttachmentArchive *x5; unsigned int x6; unsigned int x7; } *)a0 archiver:(id)a1;
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
