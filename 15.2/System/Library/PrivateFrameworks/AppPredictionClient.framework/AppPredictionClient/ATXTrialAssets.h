@class _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

- (id)client;
- (id)dictionaryForClassName:(id)a0;
- (id)filePathForClass:(Class)a0;
- (BOOL)clearStaleUnarchivedLevels;
- (id)_unarchiveResource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_cleanModelDirectory;
- (id)filePathForResource:(id)a0;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (id)_treatmentId;
- (id)pathForLegacyResourcePath:(id)a0;
- (id)filePathForClassName:(id)a0;
- (id)_unarchivedResourcePath;
- (id)dictionaryForClass:(Class)a0;
- (id)dictionaryForResource:(id)a0;

@end
