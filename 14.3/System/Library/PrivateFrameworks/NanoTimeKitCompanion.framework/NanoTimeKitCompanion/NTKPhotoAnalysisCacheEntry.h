@class NTKPhotoAnalysis;

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NTKPhotoAnalysis *analysis;
@property (nonatomic) int sequenceNumber;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
