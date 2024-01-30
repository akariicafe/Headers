@class NSString;

@interface ATXMPBAppClipSuppressionTracker : PBCodable <NSCopying> {
    struct { unsigned char suppressionType : 1; } _has;
}

@property (nonatomic) BOOL hasSuppressionType;
@property (nonatomic) int suppressionType;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasUrlHash;
@property (retain, nonatomic) NSString *urlHash;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)suppressionTypeAsString:(int)a0;
- (int)StringAsSuppressionType:(id)a0;

@end
