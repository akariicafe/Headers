@class NSURL, NSDictionary;

@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long archiveBytesConsumed;
@property (nonatomic) unsigned long long archiveSizeBytes;
@property (retain, nonatomic) NSURL *extractionPath;
@property (copy, nonatomic) NSDictionary *szOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)clientPromiseClass;

@end
