@class _DPPrivacyBudget, NSString, NSDictionary, _DPValueRange, NSNumber;

@interface _DPKeyProperties : NSObject

@property (readonly, nonatomic) unsigned long long dataAlgorithm;
@property (readonly, nonatomic) unsigned long long privatizationAlgorithm;
@property (readonly, nonatomic) unsigned long long transport;
@property (readonly, copy, nonatomic) NSString *propertiesName;
@property (readonly, nonatomic) _DPValueRange *possibleRange;
@property (readonly, nonatomic) NSNumber *acceptableError;
@property (readonly, nonatomic) _DPValueRange *trimmedScale;
@property (readonly, copy, nonatomic) NSString *noiseDistribution;
@property (readonly, nonatomic) _DPPrivacyBudget *budget;
@property (readonly, nonatomic) NSNumber *privacyParameter;
@property (readonly, nonatomic) unsigned long long fragmentWidth;
@property (readonly, nonatomic) unsigned long long fragmentCount;
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString;
@property (readonly, nonatomic) NSDictionary *parameterDictionary;
@property (readonly, nonatomic) BOOL keyPatternsAllowed;
@property (readonly, nonatomic) unsigned long long submissionPriority;

+ (void)initialize;
+ (id)keyPropertiesForName:(id)a0;
+ (id)propertiesFromFile:(id)a0;
+ (id)keyPropertiesFromDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)privatizationAlgorithmString;

@end
