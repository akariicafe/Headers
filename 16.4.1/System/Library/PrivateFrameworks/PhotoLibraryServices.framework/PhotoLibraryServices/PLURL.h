@interface PLURL : NSURL {
    _Atomic unsigned short _ssbCounter;
}

- (id)replacementObjectForCoder:(id)a0;
- (void)dealloc;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

@end
