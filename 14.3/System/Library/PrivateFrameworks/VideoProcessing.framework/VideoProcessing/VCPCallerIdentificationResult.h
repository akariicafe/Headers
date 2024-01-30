@class PHFace, NSString;

@interface VCPCallerIdentificationResult : NSObject

@property (readonly, nonatomic) PHFace *face;
@property (readonly, nonatomic) NSString *callerIdentifier;
@property (readonly, nonatomic) float confidence;

- (void).cxx_destruct;
- (id)initWithCallerIdentifier:(id)a0 face:(id)a1 andConfidence:(float)a2;

@end
