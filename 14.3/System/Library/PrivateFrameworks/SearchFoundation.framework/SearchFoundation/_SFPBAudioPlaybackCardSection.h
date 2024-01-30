@class NSArray, NSString, _SFPBRichText, _SFPBImage, _SFPBColor, NSData;

@interface _SFPBAudioPlaybackCardSection : PBCodable <_SFPBAudioPlaybackCardSection, NSSecureCoding>

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
@property (nonatomic) int state;
@property (copy, nonatomic) NSArray *playCommands;
@property (copy, nonatomic) NSArray *stopCommands;
@property (retain, nonatomic) _SFPBRichText *detailText;
@property (retain, nonatomic) _SFPBRichText *title;
@property (retain, nonatomic) _SFPBRichText *subtitle;
@property (retain, nonatomic) _SFPBImage *thumbnail;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (void)clearPunchoutOptions;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (void)addPlayCommands:(id)a0;
- (void)addStopCommands:(id)a0;
- (void)clearPlayCommands;
- (unsigned long long)playCommandsCount;
- (id)playCommandsAtIndex:(unsigned long long)a0;
- (void)clearStopCommands;
- (unsigned long long)stopCommandsCount;
- (id)stopCommandsAtIndex:(unsigned long long)a0;
- (id)initWithFacade:(id)a0;

@end
