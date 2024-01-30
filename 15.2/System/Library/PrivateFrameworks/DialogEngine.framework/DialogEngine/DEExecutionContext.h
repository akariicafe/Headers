@class NSString;

@interface DEExecutionContext : NSObject

@property struct shared_ptr<siri::dialogengine::Context> { struct Context *__ptr_; struct __shared_weak_count *__cntrl_; } SharedThis;
@property void *This;
@property (readonly) NSString *loadStatus;
@property (readonly) NSString *locale;

+ (id)globalParameters;

- (void)enableDebugLogging;
- (id)getFile;
- (void).cxx_destruct;
- (id)init;
- (id)upgrade:(id)a0;
- (void)setFile:(id)a0;
- (id).cxx_construct;
- (void)setTemplateDir:(id)a0;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::Context> { struct Context *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)load:(id)a0 locale:(id)a1;
- (void)addVariable:(id)a0;
- (id)findVariable:(id)a0;
- (BOOL)needsUpgrade:(id)a0;
- (void)registerMorphunDataPathFor:(id)a0 path:(id)a1;
- (id)getBuiltinSemanticConcepts;
- (BOOL)isBuiltinType:(id)a0;

@end
