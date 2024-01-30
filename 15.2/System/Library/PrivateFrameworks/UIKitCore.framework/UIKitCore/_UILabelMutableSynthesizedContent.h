@class _UILabelContent, UIColor;

@interface _UILabelMutableSynthesizedContent : _UILabelSynthesizedContent

@property (retain, nonatomic) _UILabelContent *content;
@property (retain, nonatomic) UIColor *overrideTextColor;
@property (nonatomic) BOOL eliminateShadows;
@property (nonatomic) long long semanticContentAttribute;
@property (nonatomic) BOOL overallWritingDirectionFollowsLayoutDirection;
@property (nonatomic) BOOL disableLinkHypenation;

- (void)setOverallWritingDirectionFollowsLayoutDirection:(BOOL)a0;
- (void)_resetSynthesizedResults;
- (void)setContent:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (id)initWithContent:(id)a0;
- (void)setDisableLinkHypenation:(BOOL)a0;
- (void)setEliminateShadows:(BOOL)a0;
- (void)setOverrideTextColor:(id)a0;

@end
