@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (id)filename;
- (BOOL)isExternalURL;
- (id)initWithObject:(id)a0;
- (id)parentIdentifier;
- (BOOL)isDownloaded;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)requiresCrossDeviceCopy;
- (unsigned long long)size;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isFolder;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;

@end
