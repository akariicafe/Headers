@class _DPPrivacyBudget, NSString, NSDictionary, _DPValueRange, NSNumber;

@interface _DPKeyProperties : NSObject

@property (readonly, nonatomic) unsigned long long dataAlgorithm;
@property (readonly, nonatomic) unsigned long long privatizationAlgorithm;
@property (readonly, nonatomic) unsigned long long transport;
@property (readonly, nonatomic) NSString *huffmanTableClass;
@property (readonly, copy, nonatomic) NSString *propertiesName;
@property (readonly, nonatomic) _DPValueRange *possibleRange;
@property (readonly, nonatomic) NSNumber *acceptableError;
@property (readonly, nonatomic) _DPValueRange *trimmedScale;
@property (readonly, copy, nonatomic) NSString *noiseDistribution;
@property (readonly, nonatomic) _DPPrivacyBudget *budget;
@property (readonly, nonatomic) NSNumber *privacyParameter;
@property (readonly, nonatomic) unsigned long long fragmentWidth;
@property (readonly, nonatomic) unsigned long long fragmentCount;
@property (readonly, nonatomic) BOOL directUpload;
@property (readonly, nonatomic) BOOL bitStringAlgorithm;
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;
@property (readonly, nonatomic) BOOL keyPatternsAllowed;
@property (readonly, nonatomic) unsigned long long submissionPriority;

+ (void)initialize;
+ (id)propertiesFromFile:(id)a0;
+ (id)keyPropertiesFromDictionary:(id)a0;
+ (id)keyPropertiesForName:(id)a0;

- (id)privatizationAlgorithmString;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
