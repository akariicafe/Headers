@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)isFolder;
- (id)identifier;
- (BOOL)isDownloaded;
- (id)filename;
- (void)encodeWithCoder:(id)a0;
- (id)parentIdentifier;
- (unsigned long long)size;
- (id)description;
- (id)initWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isExternalURL;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)requiresCrossDeviceCopy;

@end
