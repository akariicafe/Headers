@class _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

- (BOOL)_cleanModelDirectory;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)filePathForClass:(Class)a0;
- (id)_unarchivedResourcePath;
- (id)_unarchiveResource:(id)a0;
- (id)_treatmentId;
- (id)dictionaryForResource:(id)a0;
- (id)dictionaryForClass:(Class)a0;
- (id)client;
- (id)filePathForResource:(id)a0;
- (id)pathForLegacyResourcePath:(id)a0;
- (BOOL)clearStaleUnarchivedLevels;

@end
