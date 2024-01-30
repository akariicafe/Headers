@class NSString;

@interface WFPBShowDialogEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasDialogType;
@property (retain, nonatomic) NSString *dialogType;
@property (readonly, nonatomic) BOOL hasPresentationStyle;
@property (retain, nonatomic) NSString *presentationStyle;
@property (readonly, nonatomic) BOOL hasDismissalType;
@property (retain, nonatomic) NSString *dismissalType;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (retain, nonatomic) NSString *automationType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
