@class NSArray, NSString, _SFPBTableAlignmentSchema, NSData, _SFPBColor;

@interface _SFPBTableRowCardSection : PBCodable <_SFPBTableRowCardSection, NSSecureCoding>

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
@property (copy, nonatomic) NSArray *richDatas;
@property (copy, nonatomic) NSString *tableIdentifier;
@property (retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema;
@property (copy, nonatomic) NSArray *datas;
@property (nonatomic) BOOL isSubHeader;
@property (copy, nonatomic) NSString *tabGroupIdentifier;
@property (nonatomic) BOOL reducedRowHeight;
@property (nonatomic) int verticalAlign;
@property (nonatomic) BOOL alignRowsToHeader;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void)clearData;
- (id)dataAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)addData:(id)a0;
- (void)writeTo:(id)a0;
- (void)setData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)dataCount;
- (id)initWithDictionary:(id)a0;
- (void)setRichData:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;
- (void)addRichData:(id)a0;
- (void)clearRichData;
- (unsigned long long)richDataCount;
- (id)richDataAtIndex:(unsigned long long)a0;

@end
