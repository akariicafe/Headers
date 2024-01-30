@interface TSCH3DResourceLoader : NSObject

+ (id)loader;

- (void)destroyHandle:(id)a0 insideContext:(id)a1;
- (void)postbindHandle:(id)a0 config:(id)a1;
- (BOOL)shouldReuploadHandle:(id)a0 config:(id)a1;
- (unsigned long long)uploadResource:(id)a0 handle:(id)a1 insideSession:(id)a2 config:(id)a3;
- (long long)virtualScreenForContext:(id)a0;

@end
