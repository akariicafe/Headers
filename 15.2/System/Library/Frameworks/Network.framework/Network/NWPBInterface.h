@class NSString;

@interface NWPBInterface : PBCodable <NSCopying> {
    struct { unsigned char delegateIndex : 1; unsigned char generation : 1; unsigned char index : 1; unsigned char mtu : 1; unsigned char subtype : 1; unsigned char type : 1; unsigned char expensive : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasSubtype;
@property (nonatomic) int subtype;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) unsigned int index;
@property (nonatomic) BOOL hasGeneration;
@property (nonatomic) unsigned int generation;
@property (nonatomic) BOOL hasDelegateIndex;
@property (nonatomic) unsigned int delegateIndex;
@property (nonatomic) BOOL hasMtu;
@property (nonatomic) unsigned int mtu;
@property (nonatomic) BOOL hasExpensive;
@property (nonatomic) BOOL expensive;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)subtypeAsString:(int)a0;
- (int)StringAsSubtype:(id)a0;

@end
