@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (nonatomic) double lineSpacing;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) long long alignment;
@property (nonatomic) double firstLineHeadIndent;
@property (nonatomic) double headIndent;
@property (nonatomic) double tailIndent;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumLineHeight;
@property (nonatomic) double maximumLineHeight;
@property (nonatomic) long long baseWritingDirection;
@property (nonatomic) double lineHeightMultiple;
@property (nonatomic) double paragraphSpacingBefore;
@property (nonatomic) float hyphenationFactor;
@property (copy, nonatomic) NSArray *tabStops;
@property (nonatomic) double defaultTabInterval;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (nonatomic) unsigned long long lineBreakStrategy;

- (void)setHyphenationFactor:(float)a0;
- (void)setLineBreakMode:(long long)a0;
- (void)setAlignment:(long long)a0;
- (void)setUsesDefaultHyphenation:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHeadIndent:(double)a0;
- (void)setTailIndent:(double)a0;
- (void)setTabStops:(id)a0;
- (void)setDefaultTabInterval:(double)a0;
- (void)setLineHeightMultiple:(double)a0;
- (void)setParagraphSpacing:(double)a0;
- (void)setParagraphSpacingBefore:(double)a0;
- (void)_setLineBoundsOptions:(unsigned long long)a0;
- (void)setCompositionLanguage:(long long)a0;
- (void)setTighteningFactorForTruncation:(float)a0;
- (void)setHeaderLevel:(long long)a0;
- (void)setTextBlocks:(id)a0;
- (void)setTextLists:(id)a0;
- (void)_mutateTabStops;
- (void)setAllowsHangingPunctuation:(BOOL)a0;
- (void)setUsesOpticalAlignment:(BOOL)a0;
- (void)setParagraphStyle:(id)a0;
- (void)addTabStop:(id)a0;
- (void)removeTabStop:(id)a0;
- (void)setFirstLineHeadIndent:(double)a0;
- (void)setAllowsDefaultTighteningForTruncation:(BOOL)a0;
- (void)setMinimumLineHeight:(double)a0;
- (void)setMaximumLineHeight:(double)a0;
- (void)setLineBreakStrategy:(unsigned long long)a0;
- (void)setLineSpacing:(double)a0;
- (void)setBaseWritingDirection:(long long)a0;

@end
