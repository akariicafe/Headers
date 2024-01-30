@interface PLURL : NSURL {
    _Atomic unsigned short _ssbCounter;
}

- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)replacementObjectForCoder:(id)a0;
- (void)dealloc;

@end
