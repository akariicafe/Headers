@class FBKModalConfiguration, NSArray, NSString, FBKQuestionGroup, NSNumber, NSSet;
@protocol FBKChoiceSetResolverProtocol;

@interface FBKQuestion : FBKManagedLocalIDObject <FBKDiffableObject>

@property (nonatomic, readonly) BOOL configuresEnhancedLogging;
@property (nonatomic, readonly) FBKModalConfiguration *EnhancedLoggingModalConfiguration;
@property (retain) NSNumber *primitiveAnswerType;
@property (retain) NSNumber *primitiveRequired;
@property (retain) NSNumber *primitiveConditional;
@property (retain) NSArray *choices;
@property (retain, nonatomic) NSArray *modalConfigurations;
@property (retain) NSString *text;
@property (retain) NSString *role;
@property (retain) NSString *placeholder;
@property (retain) NSNumber *sortOrder;
@property (retain) NSString *resolver;
@property (retain) FBKQuestionGroup *questionGroup;
@property unsigned long long answerType;
@property (getter=isRequired) BOOL required;
@property (readonly) BOOL appearsRequiredIfOptional;
@property (retain, nonatomic) id<FBKChoiceSetResolverProtocol> choiceSetResolver;
@property (retain, nonatomic) NSSet *answers;
@property (readonly, nonatomic) NSString *tat;
@property (getter=isConditional) BOOL conditional;
@property (retain) NSNumber *conditionQuestionID;
@property (retain) id conditionValue;
@property (retain, nonatomic) NSArray *conditions;
@property (retain) NSString *choiceSetClientSideResolver;
@property (retain) NSString *targetUserAgent;
@property (retain) NSString *userAgentPopulate;
@property BOOL visible;

+ (id)entityName;
+ (id)uniquingKey;

- (void)prepareForDeletion;
- (void)setRequired:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)choiceForValue:(id)a0;
- (void)setConditional:(BOOL)a0;
- (void)addAnswer:(id)a0;
- (BOOL)affectsRequirements;
- (id)allChoices;
- (id)answerToDisplayNameValueTransformer;
- (id)diffableHashWithContext:(id)a0;
- (id)displayTextForAnswer:(id)a0;
- (BOOL)isAnswerableByAutoFill;
- (BOOL)isMultiSelect;
- (id)serverSideChoices;
- (void)setPropertiesFromJSONObject:(id)a0;
- (void)setQuestionChoices:(id)a0;
- (BOOL)shouldHaveChoices;
- (id)titleForValue:(id)a0;

@end
