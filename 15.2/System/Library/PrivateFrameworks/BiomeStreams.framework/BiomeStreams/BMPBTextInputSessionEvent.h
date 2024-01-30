@class NSString;

@interface BMPBTextInputSessionEvent : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char sessionType : 1; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) int sessionType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (int)StringAsSessionType:(id)a0;
- (unsigned long long)hash;
- (id)sessionTypeAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
