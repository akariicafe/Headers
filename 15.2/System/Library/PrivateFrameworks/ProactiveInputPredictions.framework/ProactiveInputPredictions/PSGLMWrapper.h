@interface PSGLMWrapper : NSObject

@property (readonly, nonatomic) void *langModel;
@property (readonly, nonatomic) void *lexicon;

- (id)initWithLangModel:(void *)a0 lexicon:(void *)a1;
- (void)dealloc;

@end
