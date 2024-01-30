@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) WFTumblrAccessResource *tumblrAccessResource;

+ (void)initialize;
+ (id)referencedActionResourceClasses;

- (void).cxx_destruct;
- (BOOL)isHidden;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)possibleStatesDidChange;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)setActionResources:(id)a0;
- (void)updateBlogs;

@end
