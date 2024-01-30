@class NSArray, NSString, SNTwoPassConfiguration, MLModel;

@interface SNDetectSoundRequest : NSObject <SNAnalysisPassStrategyProviding, SNAnalyzerCreating, SNTwoPassRequest, NSCopying, NSSecureCoding, SNRequest> {
    MLModel *_model;
}

@property (class, readonly, nonatomic) NSArray *allValidSoundIdentifiers;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *soundIdentifier;
@property (readonly, nonatomic) long long analysisPassStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SNTwoPassConfiguration *twoPassConfiguration;

+ (id)allValidSoundIdentifiers;
+ (id)createTwoPassConfigurationWithSoundIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSoundIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVGGishBasedMLModel:(id)a0 soundIdentifier:(id)a1;
- (id)createAnalyzerWithError:(id *)a0;
- (id)createSecondPassController;
- (id)initWithSoundIdentifier:(id)a0 shouldUseTwoPassDetection:(BOOL)a1;
- (id)initWithSoundIdentifier:(id)a0 analysisPassStrategy:(long long)a1;
- (BOOL)isEqualToDetectSoundRequest:(id)a0;

@end
