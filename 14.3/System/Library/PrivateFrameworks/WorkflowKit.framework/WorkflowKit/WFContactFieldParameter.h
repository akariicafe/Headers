@class NSArray;

@interface WFContactFieldParameter : WFParameter

@property (readonly, nonatomic) BOOL allowsTextEntry;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) long long autocapitalizationType;
@property (readonly, nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) NSArray *supportedContactProperties;
@property (readonly, nonatomic) BOOL hidesLabel;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (BOOL)displaysMultipleValueEditor;
- (Class)stateClass;
- (Class)multipleStateClass;
- (BOOL)shouldAlignLabels;

@end
