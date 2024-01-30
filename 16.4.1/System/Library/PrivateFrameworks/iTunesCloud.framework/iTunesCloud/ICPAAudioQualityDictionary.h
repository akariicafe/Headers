@class NSString;

@interface ICPAAudioQualityDictionary : PBCodable <NSCopying> {
    long long _bitDepth;
    long long _bitRate;
    long long _sampleRate;
    NSString *_channelLayoutDescription;
    unsigned int _codec;
    BOOL _isSpatialized;
    struct { unsigned char bitDepth : 1; unsigned char bitRate : 1; unsigned char sampleRate : 1; unsigned char codec : 1; unsigned char isSpatialized : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
