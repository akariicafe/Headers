@interface FigSandboxRegistrationObjCWrapper : NSObject {
    struct FigOpaqueSandboxRegistration { } *sandboxreg;
}

- (struct FigOpaqueSandboxRegistration { } *)_sandboxRegistration;
- (id)initWithRegistration:(struct FigOpaqueSandboxRegistration { } *)a0;
- (void)dealloc;

@end
