@interface PSMain : NSObject

- (id)init;
- (void)applicationDidFinishLaunching;
- (BOOL)canAddEmitterToDoc:(void *)a0;
- (void)setupEmitter:(void *)a0 inDoc:(void *)a1;
- (void)addEmitter:(id)a0;
- (void)addReplicator:(id)a0;
- (BOOL)validateAction:(SEL)a0;

@end
