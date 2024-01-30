@class NSString, NSFileProviderKernelMaterializationInfo;

@interface NSFileProvidingInfo : NSObject <NSSecureCoding> {
    unsigned long long recursiveGenerationCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct { unsigned int val[8]; } readerAuditToken;
@property (readonly, copy) NSString *readerID;
@property (readonly) unsigned long long readingOptions;
@property (readonly) NSFileProviderKernelMaterializationInfo *kernelMaterializationInfo;

+ (id)infoWithReaderID:(id)a0 options:(unsigned long long)a1 auditToken:(struct { unsigned int x0[8]; })a2 kernelMaterializationInfo:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setProvidedItemRecursiveGenerationCount:(unsigned long long)a0;

@end
