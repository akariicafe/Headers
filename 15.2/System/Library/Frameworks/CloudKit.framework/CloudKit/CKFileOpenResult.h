@class NSNumber, NSFileHandle;

@interface CKFileOpenResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct _mkbbackupref { } *handle;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSFileHandle *encryptedFileHandle;
@property (retain, nonatomic) NSNumber *fileSize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMobileKeyBagHandle:(struct _mkbbackupref { } *)a0 path:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
