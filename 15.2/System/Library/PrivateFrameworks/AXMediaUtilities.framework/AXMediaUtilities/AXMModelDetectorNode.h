@class NSURL, NSString, VNCoreMLModel;

@interface AXMModelDetectorNode : AXMEvaluationNode {
    VNCoreMLModel *_model;
}

@property (retain, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)nodeInitialize;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (BOOL)_loadModel:(id *)a0;
- (BOOL)preloadModelIfNeeded:(id *)a0;

@end
