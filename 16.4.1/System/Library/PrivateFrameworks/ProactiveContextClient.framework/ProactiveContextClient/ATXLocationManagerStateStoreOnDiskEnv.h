@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;
- (BOOL)isLocked;
- (void)dealloc;
- (void)callOnNextUnlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
