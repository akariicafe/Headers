@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDocumentIdentifier:(id)a0;
- (id)initWithFileDescriptor:(int)a0 forItemAtURL:(id)a1 allocateIfNone:(BOOL)a2 error:(id *)a3;

@end
