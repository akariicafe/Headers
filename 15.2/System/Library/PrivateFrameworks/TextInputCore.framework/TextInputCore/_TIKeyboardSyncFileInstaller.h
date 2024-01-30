@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject {
    _KSFileEntry *_entry;
}

- (void)execute;
- (BOOL)valid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithEntry:(id)a0;

@end
