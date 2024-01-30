@class NSString, NSArray;

@interface WFTagFieldParameter : WFParameter

@property (readonly, nonatomic) NSString *keyboardType;
@property (readonly, nonatomic) NSString *autocapitalizationType;
@property (readonly, nonatomic) NSString *autocorrectionType;
@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) NSArray *suggestedTags;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAlignLabels;
- (Class)singleStateClass;

@end
