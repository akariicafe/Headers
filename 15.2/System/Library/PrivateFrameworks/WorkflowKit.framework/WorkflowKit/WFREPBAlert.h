@class NSString, NSMutableArray;

@interface WFREPBAlert : PBCodable <NSCopying> {
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

- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (void)addButtons:(id)a0;
- (id)buttonsAtIndex:(unsigned long long)a0;
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
- (id)preferredStyleAsString:(int)a0;
- (int)StringAsPreferredStyle:(id)a0;

@end
