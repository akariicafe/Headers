@interface PLURL : NSURL {
    _Atomic unsigned short _ssbCounter;
}

- (void)stopAccessingSecurityScopedResource;
- (BOOL)startAccessingSecurityScopedResource;
- (id)replacementObjectForCoder:(id)a0;
- (void)dealloc;

@end
