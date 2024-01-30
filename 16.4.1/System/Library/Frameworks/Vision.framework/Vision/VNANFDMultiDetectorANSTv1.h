@interface VNANFDMultiDetectorANSTv1 : VNANFDMultiDetectorANODv4

@property (class, readonly, nonatomic) BOOL supportsExecution;

+ (Class)detectorClass;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:(id)a0;

@end
