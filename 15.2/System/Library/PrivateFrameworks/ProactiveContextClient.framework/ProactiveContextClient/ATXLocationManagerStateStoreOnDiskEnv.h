@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv> {
    id _stateChangeRegistration;
}

- (int)openFileAtPath:(id)a0 dataProtectionClass:(int)a1;
- (BOOL)isLocked;
- (void).cxx_destruct;
- (void)dealloc;
- (void)callOnNextUnlock:(id /* block */)a0;

@end
