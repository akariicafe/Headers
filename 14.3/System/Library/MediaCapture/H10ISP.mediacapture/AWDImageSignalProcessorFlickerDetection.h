@interface AWDImageSignalProcessorFlickerDetection : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char flicker50 : 1; unsigned char flicker60 : 1; unsigned char flickerDC : 1; unsigned char flickerInvalid : 1; unsigned char flickerOver500 : 1; unsigned char flickerUnder100 : 1; unsigned char flickerUnder300 : 1; unsigned char flickerUnder500 : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasFlickerDC;
@property (nonatomic) unsigned int flickerDC;
@property (nonatomic) BOOL hasFlicker50;
@property (nonatomic) unsigned int flicker50;
@property (nonatomic) BOOL hasFlicker60;
@property (nonatomic) unsigned int flicker60;
@property (nonatomic) BOOL hasFlickerUnder100;
@property (nonatomic) unsigned int flickerUnder100;
@property (nonatomic) BOOL hasFlickerUnder300;
@property (nonatomic) unsigned int flickerUnder300;
@property (nonatomic) BOOL hasFlickerUnder500;
@property (nonatomic) unsigned int flickerUnder500;
@property (nonatomic) BOOL hasFlickerOver500;
@property (nonatomic) unsigned int flickerOver500;
@property (nonatomic) BOOL hasFlickerInvalid;
@property (nonatomic) unsigned int flickerInvalid;

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
