@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest

@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSURL *destinationURL;
@property (nonatomic) long long destinationFormat;
@property (nonatomic) double destinationCompressionQuality;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (Class)operationClass;
- (id)debugDescription;
- (long long)operationPriority;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 destinationFormat:(long long)a2;

@end
