@class _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

- (BOOL)clearStaleUnarchivedLevels;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (id)filePathForClass:(Class)a0;
- (id)client;
- (BOOL)_cleanModelDirectory;
- (id)dictionaryForClassName:(id)a0;
- (id)pathForLegacyResourcePath:(id)a0;
- (id)_treatmentId;
- (id)dictionaryForClass:(Class)a0;
- (id)_unarchiveResource:(id)a0;
- (id)_unarchivedResourcePath;
- (id)dictionaryForResource:(id)a0;
- (id)init;
- (id)filePathForResource:(id)a0;
- (id)filePathForClassName:(id)a0;
- (void).cxx_destruct;

@end
