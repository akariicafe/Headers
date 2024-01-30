@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {
    struct { unsigned char counter : 1; } _has;
}

@property (retain, nonatomic) NSData *message;
@property (nonatomic) BOOL hasCounter;
@property (nonatomic) unsigned int counter;
@property (readonly, nonatomic) BOOL hasKtGossipData;
@property (retain, nonatomic) NSData *ktGossipData;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (retain, nonatomic) NSData *debugInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)attributes;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
