@class NSString, NSMutableArray;

@interface BCSChatSuggestMessage : PBCodable <NSCopying> {
    struct { unsigned char phoneHash : 1; unsigned char isVerified : 1; } _has;
}

@property (nonatomic) BOOL hasPhoneHash;
@property (nonatomic) long long phoneHash;
@property (readonly, nonatomic) BOOL hasBizId;
@property (retain, nonatomic) NSString *bizId;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *chatOpenHours;
@property (retain, nonatomic) NSMutableArray *phoneOpenHours;
@property (readonly, nonatomic) BOOL hasTimeZone;
@property (retain, nonatomic) NSString *timeZone;
@property (readonly, nonatomic) BOOL hasSquareLogoUrl;
@property (retain, nonatomic) NSString *squareLogoUrl;
@property (readonly, nonatomic) BOOL hasWideLogoUrl;
@property (retain, nonatomic) NSString *wideLogoUrl;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (readonly, nonatomic) BOOL hasTintColor;
@property (retain, nonatomic) NSString *tintColor;
@property (nonatomic) BOOL hasIsVerified;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSMutableArray *callToActions;
@property (retain, nonatomic) NSMutableArray *visibilities;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (retain, nonatomic) NSString *intentId;
@property (readonly, nonatomic) BOOL hasGroup;
@property (retain, nonatomic) NSString *group;

+ (Class)chatOpenHoursType;
+ (Class)phoneOpenHoursType;
+ (Class)callToActionsType;
+ (Class)visibilitiesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addChatOpenHours:(id)a0;
- (void)addPhoneOpenHours:(id)a0;
- (void)addCallToActions:(id)a0;
- (void)addVisibilities:(id)a0;
- (unsigned long long)chatOpenHoursCount;
- (void)clearChatOpenHours;
- (id)chatOpenHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)phoneOpenHoursCount;
- (void)clearPhoneOpenHours;
- (id)phoneOpenHoursAtIndex:(unsigned long long)a0;
- (unsigned long long)callToActionsCount;
- (void)clearCallToActions;
- (id)callToActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)visibilitiesCount;
- (void)clearVisibilities;
- (id)visibilitiesAtIndex:(unsigned long long)a0;

@end
