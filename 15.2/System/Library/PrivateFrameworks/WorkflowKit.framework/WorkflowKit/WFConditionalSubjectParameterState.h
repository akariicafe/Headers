@class NSNumber, NSString;

@interface WFConditionalSubjectParameterState : NSObject <WFParameterState>

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSNumber *maximumLength;
@property (readonly, nonatomic, getter=isCaseInsensitive) BOOL caseInsensitive;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly, nonatomic, getter=isIrrational) BOOL irrational;
@property (readonly, nonatomic) unsigned long long tense;
@property (readonly, nonatomic) unsigned long long displayableTimeUnits;
@property (readonly, nonatomic) unsigned long long comparableTimeUnits;
@property (readonly, nonatomic) NSString *unitType;
@property (readonly, nonatomic, getter=isEnumeration) BOOL enumeration;
@property (copy, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;
+ (id)subjectType;
+ (id)subjectClasses;

- (id)serializedRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVariable:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)getContentWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)a0;
- (id)localizedLabelForEnumerationPossibleState:(id)a0;
- (id)containedVariables;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithHomeIdentifier:(id)a0;
- (id)supportedComparisonOperators;

@end
