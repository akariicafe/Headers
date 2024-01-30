@class NSString;

@interface BMPBNowPlayingOutputDevice : PBCodable <NSCopying> {
    struct { unsigned char outputDeviceSubType : 1; unsigned char outputDeviceType : 1; } _has;
}

@property (nonatomic) BOOL hasOutputDeviceType;
@property (nonatomic) int outputDeviceType;
@property (nonatomic) BOOL hasOutputDeviceSubType;
@property (nonatomic) int outputDeviceSubType;
@property (readonly, nonatomic) BOOL hasOutputDeviceId;
@property (retain, nonatomic) NSString *outputDeviceId;

- (int)StringAsOutputDeviceSubType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsOutputDeviceType:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)outputDeviceTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)outputDeviceSubTypeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
