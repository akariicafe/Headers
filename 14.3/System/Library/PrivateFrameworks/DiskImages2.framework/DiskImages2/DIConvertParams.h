@class NSURL, FileLocalXPC;

@interface DIConvertParams : DIBaseParams

@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) FileLocalXPC *outputBackendXPC;
@property (readonly, nonatomic) BOOL inPlaceConversion;
@property (nonatomic) long long outputFormat;
@property (nonatomic) unsigned long long maxRawUDIFRunSize;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (BOOL)convertWithError:(id *)a0;
- (id)initWithURL:(id)a0 fileOpenMode:(unsigned short)a1 error:(id *)a2;
- (id)initWithInputURL:(id)a0 outputURL:(id)a1 error:(id *)a2;
- (id)initForInplaceWithURL:(id)a0 error:(id *)a1;

@end
