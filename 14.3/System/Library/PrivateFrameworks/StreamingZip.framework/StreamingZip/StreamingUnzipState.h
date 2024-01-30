@class NSString, NSDictionary, NSArray, NSMutableData;

@interface StreamingUnzipState : NSObject {
    struct { char *dst_ptr; unsigned long long dst_size; char *src_ptr; unsigned long long src_size; void *state; } _cmpState;
    unsigned long long _lastResumptionSavedOffset;
    NSArray *_hashes;
}

@property (readonly, nonatomic) struct { char *x0; unsigned long long x1; char *x2; unsigned long long x3; void *x4; } *cmpState;
@property (readonly, nonatomic) NSString *unzipPath;
@property (readonly, nonatomic) struct { int hashType; union { struct CC_MD5state_st { unsigned int A; unsigned int B; unsigned int C; unsigned int D; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } md5; struct CC_SHA1state_st { unsigned int h0; unsigned int h1; unsigned int h2; unsigned int h3; unsigned int h4; unsigned int Nl; unsigned int Nh; unsigned int data[16]; int num; } sha1; struct CC_MD2state_st { int num; unsigned char data[16]; unsigned int cksm[16]; unsigned int state[16]; } md2; struct CC_MD4state_st { unsigned int A; unsigned int B; unsigned int C; unsigned int D; unsigned int Nl; unsigned int Nh; unsigned int data[16]; unsigned int num; } md4; struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } sha224; struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } sha256; struct CC_SHA512state_st { unsigned long long count[2]; unsigned long long hash[8]; unsigned long long wbuf[16]; } sha384; struct CC_SHA512state_st { unsigned long long count[2]; unsigned long long hash[8]; unsigned long long wbuf[16]; } sha512; } context; } hashContext;
@property (retain, nonatomic) NSDictionary *streamInfoDict;
@property (retain, nonatomic) NSString *lastChunkPartialHash;
@property (retain, nonatomic) NSMutableData *unsureData;
@property (retain, nonatomic) NSMutableData *inMemoryFileData;
@property (nonatomic) struct { unsigned char x0[4]; struct { unsigned short x0; } x1; struct { unsigned short x0; } x2; struct { unsigned short x0; } x3; union { struct { struct { unsigned short x0; } x0; struct { unsigned short x0; } x1; } x0; struct { unsigned int x0; } x1; } x4; struct { unsigned int x0; } x5; struct { unsigned int x0; } x6; struct { unsigned int x0; } x7; struct { unsigned short x0; } x8; struct { unsigned short x0; } x9; unsigned char x10[0]; } *currentLFRecord;
@property (nonatomic) unsigned long long currentLFRecordAllocationSize;
@property (nonatomic) unsigned long long thisStageBytesComplete;
@property (nonatomic) unsigned long long currentOffset;
@property (readonly, nonatomic) unsigned long long hashedChunkSize;
@property (readonly, nonatomic) unsigned long long bytesHashedInChunk;
@property (nonatomic) unsigned long long currentCRC32;
@property (nonatomic) int currentOutputFD;
@property (nonatomic) unsigned long long recordsProcessed;
@property (nonatomic) unsigned long long totalRecordCount;
@property (nonatomic) unsigned long long totalUncompressedBytes;
@property (nonatomic) unsigned long long uncompressedBytesOutput;
@property (nonatomic) unsigned long long totalFileSizeWritten;
@property (nonatomic) unsigned short currentLFMode;
@property (nonatomic) unsigned char streamState;
@property (nonatomic) BOOL storeCurrentFileInMemory;
@property (nonatomic) BOOL currentLFRequiresDataDescriptor;
@property (nonatomic) struct { unsigned char x0[4]; union { struct { struct { unsigned int x0; } x0; struct { unsigned long long x0; } x1; struct { unsigned long long x0; } x2; } x0; struct { struct { unsigned int x0; } x0; struct { unsigned int x0; } x1; struct { unsigned int x0; } x2; } x1; } x1; } *dataDescriptor;
@property (nonatomic) BOOL denyInvalidSymlinks;
@property (nonatomic) BOOL performCachedWrites;

+ (id)unzipStateWithPath:(id)a0 options:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)a0 options:(id)a1 error:(id *)a2;
- (void)markResumptionPoint;
- (id)_checkHashForOffset:(unsigned long long)a0;
- (id)updateHashFromOffset:(unsigned long long)a0 withBytes:(const void *)a1 length:(unsigned long long)a2 onlyFinishCurrentChunk:(BOOL)a3;
- (void)clearSavedState;
- (void)_internalSetStreamState:(unsigned char)a0;
- (id)serializeState;
- (id)checkLastChunkPartialHash;
- (id)updateHashFromOffset:(unsigned long long)a0 withBytes:(const void *)a1 length:(unsigned long long)a2;
- (id)finishStream;

@end
