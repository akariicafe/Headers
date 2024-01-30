@interface SBDefaultIconModelStore : SBIconModelPropertyListFileStore

@property (class, readonly) SBDefaultIconModelStore *sharedInstance;

- (BOOL)saveDesiredIconState:(id)a0 error:(id *)a1;
- (id)loadDesiredIconState:(id *)a0;
- (id)init;
- (void)_deleteLegacyState;
- (BOOL)deleteDesiredIconStateWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)loadCurrentIconState:(id *)a0;

@end
