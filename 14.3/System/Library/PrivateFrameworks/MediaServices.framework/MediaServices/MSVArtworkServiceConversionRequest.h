@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest

@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) long long destinationFormat;
@property (nonatomic) double destinationCompressionQuality;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)operationClass;
- (id)initWithCoder:(id)a0;
- (long long)operationPriority;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 destinationFormat:(long long)a2;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
