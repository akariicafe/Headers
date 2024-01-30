@class _SFPBCard, NSArray, NSString, NSData, _SFPBUserReportRequest, _SFPBCommand, _SFPBCardSectionValue;

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (retain, nonatomic) _SFPBCardSectionValue *value;
@property (retain, nonatomic) _SFPBCard *nextCard;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSArray *parameterKeyPaths;
@property (copy, nonatomic) NSString *cardSectionId;
@property (copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) _SFPBUserReportRequest *userReportRequest;
@property (retain, nonatomic) _SFPBCommand *command;
@property (retain, nonatomic) _SFPBCommand *previewCommand;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (copy, nonatomic) NSString *cardSectionDetail;
@property (copy, nonatomic) NSString *previewButtonItemsTitle;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)addCommands:(id)a0;
- (void)addParameterKeyPaths:(id)a0;
- (void)addPreviewButtonItems:(id)a0;
- (void)clearCommands;
- (unsigned long long)commandsCount;
- (id)commandsAtIndex:(unsigned long long)a0;
- (void)clearParameterKeyPaths;
- (unsigned long long)parameterKeyPathsCount;
- (id)parameterKeyPathsAtIndex:(unsigned long long)a0;
- (void)clearPreviewButtonItems;
- (unsigned long long)previewButtonItemsCount;
- (id)previewButtonItemsAtIndex:(unsigned long long)a0;
- (id)initWithSFCardSection:(id)a0;

@end
