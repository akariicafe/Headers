@class NSMutableDictionary, NSDictionary, NSString, NSSet;
@protocol HFIconDescriptor;

@interface HRETemplate : NSObject

@property (retain, nonatomic) NSMutableDictionary *config;
@property (readonly, nonatomic) NSDictionary *configuration;
@property (readonly, nonatomic) NSDictionary *rankingConfig;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *longDescription;
@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSSet *optionalTypes;
@property (readonly, nonatomic) NSSet *requiredTypes;
@property (readonly, nonatomic) NSSet *requiredTypeGroups;

+ (id)representableObjectsFromHomeObjects:(id)a0 context:(id)a1;
+ (BOOL)representableAccessoryObject:(id)a0 containsObject:(id)a1;
+ (id)characteristicsTypesAllowingFullVarianceInVarianceDictionary:(id)a0;
+ (BOOL)targetValue:(id)a0 withinAllowedVariance:(id)a1;
+ (id)representableObjectToUseForVerboseString:(id)a0 actionableObjects:(id)a1;
+ (id)staticTemplates;
+ (id)typesForObjectsInContext:(id)a0 intersectingWithObjects:(id)a1;
+ (BOOL)shouldUseVerboseStringWithObjectsInContext:(id)a0 actionableObjectsInActions:(id)a1 actionableObjectsInEvents:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)triggerType;
- (id)initWithConfiguration:(id)a0;
- (id)naturalLanguageTitleForObjectsInContext:(id)a0 forRecommendation:(id)a1 options:(id)a2;
- (id)iconDescriptorForHomeObjects:(id)a0 forRecommendation:(id)a1;
- (id)naturalLanguageTitleForRecommendation:(id)a0 options:(id)a1;
- (id)involvedTypes;
- (id)recommendationSplitStrategy;
- (id)processedActionMap;
- (id)triggerCharacteristicTypes;

@end
