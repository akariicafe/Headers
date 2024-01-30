@class NSString;

@interface _NMRMediaRemoteGetIconMessage : PBCodable <NSCopying> {
    struct { unsigned char height : 1; unsigned char timestamp : 1; unsigned char width : 1; unsigned char originIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) double height;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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

@end
