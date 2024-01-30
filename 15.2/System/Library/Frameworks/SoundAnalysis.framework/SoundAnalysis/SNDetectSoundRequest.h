@class NSArray, NSString, MLModelConfiguration, SNDetectorVariant;

@interface SNDetectSoundRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {
    SNDetectorVariant *_detectorVariant;
}

@property (class, readonly, nonatomic) NSArray *allValidSoundIdentifiers;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *soundIdentifier;
@property (retain, nonatomic) MLModelConfiguration *modelConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allValidSoundIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSoundIdentifier:(id)a0;
- (id)initWithVGGishBasedMLModel:(id)a0 soundIdentifier:(id)a1;
- (id)createAnalyzerWithError:(id *)a0;
- (id)initWithDetectorVariant:(id)a0 soundIdentifier:(id)a1;
- (id)initWithDetectorVariant:(id)a0 soundIdentifier:(id)a1 modelConfiguration:(id)a2;
- (BOOL)isEqualToDetectSoundRequest:(id)a0;
- (id)initWithSoundIdentifier:(id)a0 shouldUseTwoPassDetection:(BOOL)a1;
- (id)initWithDetectorIdentifier:(id)a0 error:(id *)a1;

@end
