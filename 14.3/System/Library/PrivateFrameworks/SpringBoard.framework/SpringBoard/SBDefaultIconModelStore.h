@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore

@property (class, readonly) SBDefaultIconModelStore *sharedInstance;

- (id)init;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)_deleteLegacyState;
- (id)loadDesiredIconState:(id *)a0;
- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;

@end
