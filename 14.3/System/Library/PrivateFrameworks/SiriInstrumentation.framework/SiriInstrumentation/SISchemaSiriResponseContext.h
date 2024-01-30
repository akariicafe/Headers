@class NSString, NSData;

@interface SISchemaSiriResponseContext : PBCodable {
    struct { unsigned char presentationType : 1; unsigned char siriResponseMode : 1; } _has;
}

@property (copy, nonatomic) NSString *dialogPhase;
@property (nonatomic) BOOL hasDialogPhase;
@property (nonatomic) int presentationType;
@property (nonatomic) BOOL hasPresentationType;
@property (nonatomic) int siriResponseMode;
@property (nonatomic) BOOL hasSiriResponseMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
