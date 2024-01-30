@interface AWDDataFrames : PBCodable <NSCopying> {
    struct { unsigned char cFack : 1; unsigned char cFackCFpoll : 1; unsigned char cFpoll : 1; unsigned char dataCFack : 1; unsigned char dataCFackCFpoll : 1; unsigned char dataCFpoll : 1; unsigned char dataFrames : 1; unsigned char null : 1; unsigned char qoSdata : 1; unsigned char qoSdataCFack : 1; unsigned char qoSdataCFackCFpoll : 1; unsigned char qoSnodataCFack : 1; unsigned char qoSnodataCFpoll : 1; unsigned char qoSnull : 1; } _has;
}

@property (nonatomic) BOOL hasDataFrames;
@property (nonatomic) unsigned long long dataFrames;
@property (nonatomic) BOOL hasDataCFack;
@property (nonatomic) unsigned long long dataCFack;
@property (nonatomic) BOOL hasDataCFpoll;
@property (nonatomic) unsigned long long dataCFpoll;
@property (nonatomic) BOOL hasDataCFackCFpoll;
@property (nonatomic) unsigned long long dataCFackCFpoll;
@property (nonatomic) BOOL hasNull;
@property (nonatomic) unsigned long long null;
@property (nonatomic) BOOL hasCFack;
@property (nonatomic) unsigned long long cFack;
@property (nonatomic) BOOL hasCFpoll;
@property (nonatomic) unsigned long long cFpoll;
@property (nonatomic) BOOL hasCFackCFpoll;
@property (nonatomic) unsigned long long cFackCFpoll;
@property (nonatomic) BOOL hasQoSdata;
@property (nonatomic) unsigned long long qoSdata;
@property (nonatomic) BOOL hasQoSdataCFack;
@property (nonatomic) unsigned long long qoSdataCFack;
@property (nonatomic) BOOL hasQoSdataCFackCFpoll;
@property (nonatomic) unsigned long long qoSdataCFackCFpoll;
@property (nonatomic) BOOL hasQoSnull;
@property (nonatomic) unsigned long long qoSnull;
@property (nonatomic) BOOL hasQoSnodataCFpoll;
@property (nonatomic) unsigned long long qoSnodataCFpoll;
@property (nonatomic) BOOL hasQoSnodataCFack;
@property (nonatomic) unsigned long long qoSnodataCFack;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
