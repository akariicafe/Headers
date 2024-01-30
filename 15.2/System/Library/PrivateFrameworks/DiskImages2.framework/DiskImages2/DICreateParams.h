@class NSString;

@interface DICreateParams : DIBaseParams

@property (nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long encryptionMethod;
@property (copy, nonatomic) NSString *systemKeychainAccount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)createWithError:(id *)a0;
- (BOOL)createDiskImageParamsWithError:(id *)a0;
- (BOOL)createEncryptionWithXPCHandler:(id)a0 error:(id *)a1;
- (BOOL)onErrorCleanup;
- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (BOOL)eraseIfExistingWithError:(id *)a0;
- (void)createDiskImageParamsXPC;
- (BOOL)resizeWithNumBlocks:(unsigned long long)a0 error:(id *)a1;
- (BOOL)checkExistingFileWithIsDirectory:(BOOL)a0 error:(id *)a1;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;

@end
