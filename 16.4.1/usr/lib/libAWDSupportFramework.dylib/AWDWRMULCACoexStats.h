@interface AWDWRMULCACoexStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char uLCACriCarDLBW : 1; unsigned char uLCACriCarDLFreq : 1; unsigned char uLCACriCarULBW : 1; unsigned char uLCACriCarULFreq : 1; unsigned char uLCAPriCarDLBW : 1; unsigned char uLCAPriCarDLFreq : 1; unsigned char uLCAPriCarULBW : 1; unsigned char uLCAPriCarULFreq : 1; unsigned char uLCAHasCoexBand : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasULCAHasCoexBand;
@property (nonatomic) BOOL uLCAHasCoexBand;
@property (nonatomic) BOOL hasULCAPriCarULFreq;
@property (nonatomic) unsigned int uLCAPriCarULFreq;
@property (nonatomic) BOOL hasULCAPriCarDLFreq;
@property (nonatomic) unsigned int uLCAPriCarDLFreq;
@property (nonatomic) BOOL hasULCAPriCarULBW;
@property (nonatomic) unsigned int uLCAPriCarULBW;
@property (nonatomic) BOOL hasULCAPriCarDLBW;
@property (nonatomic) unsigned int uLCAPriCarDLBW;
@property (nonatomic) BOOL hasULCACriCarULFreq;
@property (nonatomic) unsigned int uLCACriCarULFreq;
@property (nonatomic) BOOL hasULCACriCarDLFreq;
@property (nonatomic) unsigned int uLCACriCarDLFreq;
@property (nonatomic) BOOL hasULCACriCarULBW;
@property (nonatomic) unsigned int uLCACriCarULBW;
@property (nonatomic) BOOL hasULCACriCarDLBW;
@property (nonatomic) unsigned int uLCACriCarDLBW;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
