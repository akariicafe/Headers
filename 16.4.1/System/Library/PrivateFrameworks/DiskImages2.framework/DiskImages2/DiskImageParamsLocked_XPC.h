@interface DiskImageParamsLocked_XPC : DiskImageParamsXPC

- (id)initWithBackendXPC:(id)a0;
- (id)newWithPassphrase:(const char *)a0 error:(id *)a1;

@end
