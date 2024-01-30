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
- (id)suppressionTypeAsString:(int)a0;
- (int)StringAsSuppressionType:(id)a0;

@end
