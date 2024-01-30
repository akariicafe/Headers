@class NSData, NSString;

@interface SYPBContentItem : PBCodable <NSCopying> {
    struct { unsigned char previewLoadLevel : 1; } _has;
}

@property (retain, nonatomic) NSData *itemIdentifierData;
@property (readonly, nonatomic) BOOL hasDisplayTitle;
@property (retain, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) BOOL hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL hasSourceLastKnownName;
@property (retain, nonatomic) NSString *sourceLastKnownName;
@property (readonly, nonatomic) BOOL hasItemURL;
@property (retain, nonatomic) NSString *itemURL;
@property (readonly, nonatomic) BOOL hasUserActivityData;
@property (retain, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) BOOL hasLinkPreviewMetadata;
@property (retain, nonatomic) NSData *linkPreviewMetadata;
@property (nonatomic) BOOL hasPreviewLoadLevel;
@property (nonatomic) long long previewLoadLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
