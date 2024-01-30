@class NSHashTable;

@interface HDDiagnosticManager : NSObject {
    NSHashTable *_objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedDiagnosticManager;

- (id)diagnosticsForKeys:(id)a0;
- (id)_diagnosticsForKeys:(id)a0 shouldLog:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (id)_diagnosticsOverview;
- (void)logAllDiagnostics;
- (void)removeObject:(id)a0;

@end
