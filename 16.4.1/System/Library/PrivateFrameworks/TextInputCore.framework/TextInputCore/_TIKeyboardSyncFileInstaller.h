@class _KSFileEntry;

@interface _TIKeyboardSyncFileInstaller : NSObject {
    _KSFileEntry *_entry;
}

- (void)execute;
- (BOOL)valid;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithEntry:(id)a0;

@end
