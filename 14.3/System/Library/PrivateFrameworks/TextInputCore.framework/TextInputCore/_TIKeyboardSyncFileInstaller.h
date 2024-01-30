@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject {
    _KSFileEntry *_entry;
}

- (void).cxx_destruct;
- (BOOL)valid;
- (void)dealloc;
- (void)execute;
- (id)initWithEntry:(id)a0;
- (void)invalidate;

@end
