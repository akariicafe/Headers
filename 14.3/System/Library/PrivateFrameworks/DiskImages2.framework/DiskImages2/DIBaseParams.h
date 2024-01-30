@class NSURL, DiskImageParamsXPC;

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } backend;
@property (readonly, nonatomic) struct unique_ptr<crypto::header, std::__1::default_delete<crypto::header> > { struct __compressed_pair<crypto::header *, std::__1::default_delete<crypto::header> > { struct header *x0; } x0; } *cryptoHeader;
@property (retain, nonatomic) DiskImageParamsXPC *diskImageParamsXPC;
@property (readonly, nonatomic) NSURL *inputURL;
@property (nonatomic) BOOL allowStoringInKeychain;
@property (readonly, nonatomic) BOOL RAMdisk;
@property (nonatomic) unsigned long long rawBlockSize;
@property (nonatomic) long long debugLevel;
@property (nonatomic) long long logsForwarding;
@property (nonatomic) unsigned long long readPassphraseFlags;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 fileOpenMode:(unsigned short)a1 error:(id *)a2;
- (BOOL)hasCryptoBackend;
- (BOOL)getPassphraseFromUserWithXpcHandler:(id)a0 error:(id *)a1;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)getPassphraseFromConsoleWithUseStdin:(BOOL)a0 error:(id *)a1;
- (id)copyEncryptionUUID;
- (id)copyInstanceID;

@end
