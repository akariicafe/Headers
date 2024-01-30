@interface FigSandboxRegistrationObjCWrapper : NSObject {
    struct FigOpaqueSandboxRegistration { } *sandboxreg;
}

- (void)dealloc;
- (id)initWithRegistration:(struct FigOpaqueSandboxRegistration { } *)a0;
- (struct FigOpaqueSandboxRegistration { } *)_sandboxRegistration;

@end
