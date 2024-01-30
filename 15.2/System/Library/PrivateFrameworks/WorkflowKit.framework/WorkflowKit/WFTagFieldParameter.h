@class NSArray;

@interface WFTagFieldParameter : WFParameter

@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long autocapitalizationType;
@property (readonly, nonatomic) long long autocorrectionType;
@property (readonly, nonatomic) long long textAlignment;
@property (readonly, nonatomic) NSArray *suggestedTags;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;
- (BOOL)shouldAlignLabels;

@end
