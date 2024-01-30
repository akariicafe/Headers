@class NSString, NSMutableArray;

@interface AWDHoneybeeSignature : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char instances : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasRadarTitle;
@property (retain, nonatomic) NSString *radarTitle;
@property (readonly, nonatomic) BOOL hasRadarSignature;
@property (retain, nonatomic) NSString *radarSignature;
@property (readonly, nonatomic) BOOL hasRadarDescription;
@property (retain, nonatomic) NSString *radarDescription;
@property (readonly, nonatomic) BOOL hasRadarComponent;
@property (retain, nonatomic) NSString *radarComponent;
@property (readonly, nonatomic) BOOL hasRadarVersion;
@property (retain, nonatomic) NSString *radarVersion;
@property (readonly, nonatomic) BOOL hasRadarAttachmentUUID;
@property (retain, nonatomic) NSString *radarAttachmentUUID;
@property (retain, nonatomic) NSMutableArray *radarAttachmentTypes;
@property (readonly, nonatomic) BOOL hasRadarAttachmentFilename;
@property (retain, nonatomic) NSString *radarAttachmentFilename;
@property (retain, nonatomic) NSMutableArray *keywords;
@property (nonatomic) BOOL hasInstances;
@property (nonatomic) int instances;

+ (Class)keywordsType;
+ (Class)radarAttachmentTypesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addKeywords:(id)a0;
- (void)clearKeywords;
- (id)keywordsAtIndex:(unsigned long long)a0;
- (unsigned long long)keywordsCount;
- (void)addRadarAttachmentTypes:(id)a0;
- (void)clearRadarAttachmentTypes;
- (id)radarAttachmentTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)radarAttachmentTypesCount;

@end
