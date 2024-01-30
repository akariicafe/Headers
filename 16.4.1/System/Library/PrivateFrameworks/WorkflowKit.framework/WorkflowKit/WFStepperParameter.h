@class NSString, NSNumber;

@interface WFStepperParameter : WFParameter

@property (readonly, copy, nonatomic) NSString *singularNoun;
@property (readonly, copy, nonatomic) NSString *pluralNoun;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, copy, nonatomic) NSString *localizedLabelFormatString;

- (id)initWithDefinition:(id)a0;
- (id)localizedLabel;
- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelWithState:(id)a0 includingPrefix:(BOOL)a1;
- (id)localizedLabelWithoutCountAndPrefix;
- (Class)singleStateClass;

@end
