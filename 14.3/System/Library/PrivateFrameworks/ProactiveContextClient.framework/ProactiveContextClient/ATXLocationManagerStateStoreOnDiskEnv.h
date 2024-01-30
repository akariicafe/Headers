@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isLocked;
- (void)callOnNextUnlock:(id /* block */)a0;
- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;

@end
