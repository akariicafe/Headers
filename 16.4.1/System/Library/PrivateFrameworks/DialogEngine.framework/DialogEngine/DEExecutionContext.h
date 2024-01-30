@class NSString;

@interface DEExecutionContext : NSObject

@property struct shared_ptr<siri::dialogengine::Context> { struct Context *__ptr_; struct __shared_weak_count *__cntrl_; } SharedThis;
@property void *This;
@property (readonly) NSString *loadStatus;
@property (readonly) NSString *locale;

+ (id)globalParameters;

- (void)enableDebugLogging;
- (id).cxx_construct;
- (void)setFile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)getFile;
- (void)setTemplateDir:(id)a0;
- (void)addVariable:(id)a0;
- (id)findVariable:(id)a0;
- (id)getBuiltinSemanticConcepts;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::Context> { struct Context *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)isBuiltinType:(id)a0;
- (BOOL)load:(id)a0 locale:(id)a1;
- (BOOL)needsUpgrade:(id)a0;
- (void)registerMorphunDataPathFor:(id)a0 path:(id)a1;
- (id)upgrade:(id)a0;

@end
