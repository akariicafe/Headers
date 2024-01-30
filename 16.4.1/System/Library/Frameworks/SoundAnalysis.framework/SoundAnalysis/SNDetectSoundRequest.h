@class NSArray, NSString, MLModelConfiguration, NSPredicate, SNDetectorVariant;

@interface SNDetectSoundRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {
    SNDetectorVariant *_detectorVariant;
}

@property (class, readonly, nonatomic) NSArray *allValidSoundIdentifiers;
@property (class, readonly, nonatomic) NSArray *allValidDetectorIdentifiers;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *soundIdentifier;
@property (retain, nonatomic) MLModelConfiguration *modelConfiguration;
@property (copy, nonatomic) NSPredicate *resultsPredicate;
@property (nonatomic) long long resultsPredicateLeakCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allValidSoundIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSoundIdentifier:(id)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (id)initWithDetectorIdentifier:(id)a0 error:(id *)a1;
- (id)initWithDetectorVariant:(id)a0 soundIdentifier:(id)a1 modelConfiguration:(id)a2 resultsPredicate:(id)a3 resultsPredicateLeakCount:(long long)a4;
- (id)initWithSoundIdentifier:(id)a0 shouldUseTwoPassDetection:(BOOL)a1;
- (id)initWithVGGishBasedMLModel:(id)a0 soundIdentifier:(id)a1;
- (BOOL)setResultsPredicate:(id)a0 error:(id *)a1;

@end
