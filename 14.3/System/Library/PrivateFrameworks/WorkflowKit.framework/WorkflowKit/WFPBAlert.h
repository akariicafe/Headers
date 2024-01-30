@class NSString, NSMutableArray;

@interface WFPBAlert : PBCodable <NSCopying> {
    struct { unsigned char preferredStyle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (nonatomic) BOOL hasPreferredStyle;
@property (nonatomic) int preferredStyle;

+ (Class)buttonsType;

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
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (void)addButtons:(id)a0;
- (id)buttonsAtIndex:(unsigned long long)a0;
- (id)preferredStyleAsString:(int)a0;
- (int)StringAsPreferredStyle:(id)a0;

@end
