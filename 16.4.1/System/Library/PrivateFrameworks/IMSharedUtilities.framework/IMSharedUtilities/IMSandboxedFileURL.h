@interface IMSandboxedFileURL : IMSandboxedResource

+ (Class)resourceClass;

- (id)initWithFileURL:(id)a0;
- (char *)_sandboxExtensionForPID:(int)a0;
- (id)initWithFileURL:(id)a0 destinationProcessPID:(int)a1;

@end
