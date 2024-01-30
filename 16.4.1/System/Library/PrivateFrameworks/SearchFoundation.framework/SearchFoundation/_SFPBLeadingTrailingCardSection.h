@class NSArray, NSString, NSData, _SFPBColor, _SFPBGraphicalFloat;

@interface _SFPBLeadingTrailingCardSection : PBCodable <_SFPBLeadingTrailingCardSection, NSSecureCoding>

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
@property (copy, nonatomic) NSArray *leadingCardSections;
@property (copy, nonatomic) NSArray *trailingCardSections;
@property (retain, nonatomic) _SFPBGraphicalFloat *leadingToTrailingRatio;
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
- (void)addLeadingCardSections:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (void)addTrailingCardSections:(id)a0;
- (void)clearLeadingCardSections;
- (void)clearPunchoutOptions;
- (void)clearTrailingCardSections;
- (id)leadingCardSectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)leadingCardSectionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;
- (id)trailingCardSectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)trailingCardSectionsCount;

@end
