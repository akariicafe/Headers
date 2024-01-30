@class NSMutableDictionary;

@interface OSALegacyXform : NSObject {
    NSMutableDictionary *_templates;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)prepareTemplate:(id)a0 forLogType:(id)a1 error:(id *)a2;
- (BOOL)transformJSON:(id)a0 header:(id)a1 error:(id *)a2 streamingBlock:(id /* block */)a3;
- (id)formatArm64ThreadState:(id)a0;
- (BOOL)transformLines:(id)a0 withDefinitions:(id)a1 body:(id)a2 header:(id)a3 error:(id *)a4 streamingBlock:(id /* block */)a5;
- (id)_getValueForKey:(id)a0 fromBody:(id)a1 orHeader:(id)a2;
- (id)formatCallstacks:(id)a0 withImages:(id)a1 andLegacyInfo:(id)a2 macosStyle:(BOOL)a3;
- (id)formatArm32ThreadState:(id)a0;
- (id)formatX86ThreadState:(id)a0;
- (id)formatImages:(id)a0 withLegacyInfo:(id)a1 macosStyle:(BOOL)a2;

@end
