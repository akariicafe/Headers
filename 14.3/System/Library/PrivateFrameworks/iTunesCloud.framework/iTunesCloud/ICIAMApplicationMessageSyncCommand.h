@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying> {
    struct { unsigned char commandSerialNumber : 1; unsigned char commandType : 1; } _has;
}

@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) int commandType;
@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (retain, nonatomic) ICIAMApplicationMessage *applicationMessage;
@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) long long commandSerialNumber;

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
- (id)commandTypeAsString:(int)a0;
- (int)StringAsCommandType:(id)a0;

@end
