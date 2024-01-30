@class DIURL, DICreateParams;

@interface DIConvertParams : DIBaseParams

@property (copy, nonatomic) DIURL *outputURL;
@property (retain, nonatomic) DICreateParams *createParams;
@property (readonly, nonatomic) BOOL inPlaceConversion;
@property (nonatomic) long long outputFormat;
@property (nonatomic) unsigned long long encryptionMethod;
@property (nonatomic) unsigned long long maxRawUDIFRunSize;
@property (nonatomic) unsigned long long sparseBundleBandSize;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isUDIFWithFormat:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)convertWithError:(id *)a0;
- (id)copyUpdatedOutputURLWithError:(id *)a0;
- (id)initForInplaceWithExistingParams:(id)a0 error:(id *)a1;
- (id)initForInplaceWithURL:(id)a0 error:(id *)a1;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 error:(id *)a2;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 shadowURLs:(id)a2 error:(id *)a3;
- (BOOL)validateDeserializationWithError:(id *)a0;
- (BOOL)validateFileWithURL:(id)a0 error:(id *)a1;

@end
