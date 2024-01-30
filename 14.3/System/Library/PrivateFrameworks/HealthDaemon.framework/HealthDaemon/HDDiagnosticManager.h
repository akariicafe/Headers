@class NSHashTable;

@interface HDDiagnosticManager : NSObject {
    NSHashTable *_objects;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedDiagnosticManager;

- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (id)_diagnosticsForKeys:(id)a0 shouldLog:(BOOL)a1;
- (id)diagnosticsForKeys:(id)a0;
- (void)logAllDiagnostics;
- (id)_diagnosticsOverview;

@end
