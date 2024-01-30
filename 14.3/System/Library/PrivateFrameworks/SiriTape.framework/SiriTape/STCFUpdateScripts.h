@class NSDictionary;

@interface STCFUpdateScripts : NSObject {
    NSDictionary *_updatedScripts;
}

- (id)init;
- (void).cxx_destruct;
- (void)_getUpdatedScripts;
- (void)_writeUpdatedReplayFileAt:(id)a0 withObjects:(id)a1 error:(id *)a2;
- (void)updateCFScriptsForReplayFile:(id)a0 withCompletion:(id /* block */)a1;

@end
