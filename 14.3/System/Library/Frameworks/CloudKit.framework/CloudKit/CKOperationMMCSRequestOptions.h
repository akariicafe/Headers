@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL resumableContainerLimpMode;
@property (nonatomic) BOOL chunkingLibraryCorruptionMode;
@property (nonatomic) BOOL insufficientDiskSpaceMode;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
