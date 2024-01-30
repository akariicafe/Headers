@class NSArray, NSString, NSData, _SFPBColor;

@interface _SFPBStrokeAnimationCardSection : PBCodable <_SFPBStrokeAnimationCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *strokeAnimationRepresentation;
@property (copy, nonatomic) NSArray *strokeNames;
@property (copy, nonatomic) NSArray *characters;
@property (copy, nonatomic) NSArray *pronunciations;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearCharacters;
- (void)addStrokeNames:(id)a0;
- (unsigned long long)charactersCount;
- (void)addCharacters:(id)a0;
- (void)addPronunciations:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (id)charactersAtIndex:(unsigned long long)a0;
- (void)clearPronunciations;
- (void)clearPunchoutOptions;
- (void)clearStrokeNames;
- (id)pronunciationsAtIndex:(unsigned long long)a0;
- (unsigned long long)pronunciationsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;
- (id)strokeNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)strokeNamesCount;

@end
