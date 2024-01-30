@class NSString;

@interface TSPDigest : NSObject <NSCopying> {
    struct array<unsigned char, 20> { unsigned char __elems_[20]; } _digestData;
}

@property (readonly, nonatomic) const void *digestData;
@property (readonly, nonatomic) NSString *digestString;

+ (id)emptyDataDigest;
+ (id)digestWithDigestString:(id)a0;
+ (id)digestFromNSData:(id)a0;
+ (id)digestFromDispatchData:(id)a0;
+ (id)digestFromReadChannel:(id)a0 error:(out id *)a1;
+ (id)digestFromReadChannel:(id)a0 scanForOSLikeCorruption:(BOOL)a1 foundLikelyOSCorruption:(BOOL *)a2 foundLikelyZeroBytesCorruption:(BOOL *)a3 error:(out id *)a4;

- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDigestString:(id)a0;
- (id)anonymousIdentifierWithDocumentProperties:(id)a0 passphrase:(id)a1;
- (id)initFromNSData:(id)a0;
- (id)initFromDispatchData:(id)a0;
- (id)initFromReadChannel:(id)a0 scanForOSLikeCorruption:(BOOL)a1 foundLikelyOSCorruption:(BOOL *)a2 foundLikelyZeroBytesCorruption:(BOOL *)a3 error:(out id *)a4;
- (id)initFromSHA1Context:(struct CC_SHA1state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7[16]; int x8; } *)a0;
- (id)initFromReadChannel:(id)a0 error:(out id *)a1;
- (id)initFromBytes:(const void *)a0 length:(unsigned int)a1;
- (id)anonymousIdentifierWithContext:(id)a0;
- (id)initFromProtobufString:(const void *)a0;
- (void)saveToProtobufString:(void *)a0;

@end
