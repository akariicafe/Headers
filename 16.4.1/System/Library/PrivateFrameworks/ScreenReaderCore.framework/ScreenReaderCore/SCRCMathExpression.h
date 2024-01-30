@class NSArray, NSString;

@interface SCRCMathExpression : NSObject {
    unsigned long long _cachedMaximumDepth;
}

@property (weak, nonatomic) SCRCMathExpression *parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL isRangeSubSuperscript;
@property (readonly, nonatomic) BOOL canBeUsedWithRange;
@property (readonly, nonatomic) BOOL isBaseSubSuperscript;
@property (readonly, nonatomic) BOOL canBeUsedWithBase;
@property (readonly, nonatomic) BOOL isNumber;
@property (readonly, nonatomic) BOOL isInteger;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) BOOL isNaturalSuperscript;
@property (readonly, nonatomic) BOOL hasSimpleArrayOfChildren;
@property (readonly, nonatomic) BOOL isEllipsis;
@property (readonly, nonatomic) BOOL isTermSeparator;
@property (readonly, nonatomic) BOOL isOperationSymbol;
@property (readonly, nonatomic) BOOL isFenceDelimiter;
@property (readonly, nonatomic) BOOL isFunctionName;
@property (readonly, nonatomic) BOOL isWordOrAbbreviation;
@property (readonly, nonatomic) unsigned long long fractionLevel;
@property (readonly, nonatomic) BOOL isSimpleNumericalFraction;
@property (readonly, nonatomic) BOOL beginsWithSpace;
@property (readonly, nonatomic) BOOL endsWithSpace;
@property (readonly, nonatomic) BOOL isMultiRowTable;
@property (readonly, nonatomic) BOOL isUnlinedFraction;
@property (readonly, nonatomic) NSString *latexFormatStringAsOver;
@property (readonly, nonatomic) NSString *latexFormatStringAsUnder;
@property (readonly, nonatomic) BOOL canBeWrappedInLatexMathIndicators;
@property (readonly, nonatomic) NSArray *siblings;
@property (readonly, nonatomic) NSArray *subExpressions;

+ (id)mathExpressionWithDictionary:(id)a0;
+ (Class)_classForExpressionType:(id)a0;
+ (void)setPathToSegmentOrderingPlist:(id)a0;

- (id)localizedStringForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)speakableDescription;
- (id)mathMLString;
- (id)fenceDelimiters;
- (id)localizedSegmentOrderingForKey:(id)a0;
- (void)_applyTreePositionOfOriginalSegment:(id)a0 toPrefixedOrSuffixedSegment:(id)a1;
- (id)_scrcBundle;
- (id)arrayWithoutNilsFromFirstChild:(id)a0 secondChild:(id)a1 thirdChild:(id)a2;
- (BOOL)canFormWordStartingWithExpression:(id)a0;
- (id)dollarCodeDescription;
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)a0 numberOfOuterRadicals:(unsigned long long)a1;
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)a0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)a0 treePosition:(id)a1 openOperator:(id)a2 openOperatorTreePosition:(id)a3 closeOperator:(id)a4 closeOperatorTreePosition:(id)a5;
- (id)latexDescription;
- (id)latexDescriptionForChildrenJoinedByString:(id)a0;
- (id)latexDescriptionInMathMode:(BOOL)a0;
- (id)latexIdentifierForFenceOperator:(id)a0 isClosingOperator:(BOOL)a1;
- (id)latexIdentifierForIdentifier:(id)a0;
- (id)latexMathModeDescription;
- (id)localizedAttributedStringForKey:(id)a0;
- (id)localizedAttributedStringForKey:(id)a0 treePosition:(id)a1;
- (id)localizedStringForNumber:(id)a0;
- (unsigned long long)maximumDepth;
- (unsigned long long)maximumFractionLevelOfSubExpressions;
- (unsigned long long)numberOfTables;
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)a0 arePausesAllowed:(BOOL)a1 isPartOfWord:(BOOL)a2;
- (id)speakableSegments:(id)a0 withLocalizablePrefix:(id)a1 localizableSuffix:(id)a2;
- (id)speakableSegments:(id)a0 withPrefix:(id)a1 suffix:(id)a2;
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)speakableSegmentsUpToDepth:(unsigned long long)a0;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2 localizablePrefix:(id)a3 localizableSuffix:(id)a4;
- (id)speakableSegmentsWithSpeakingStyle:(long long)a0 upToDepth:(unsigned long long)a1 treePosition:(id)a2 prefix:(id)a3 suffix:(id)a4;
- (id)speakableSummary;

@end
