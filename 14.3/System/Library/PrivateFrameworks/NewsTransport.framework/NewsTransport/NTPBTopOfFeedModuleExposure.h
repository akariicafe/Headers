@class NSData;

@interface NTPBTopOfFeedModuleExposure : PBCodable <NSCopying> {
    struct { unsigned char moduleEventType : 1; unsigned char moduleItemCount : 1; unsigned char moduleLocation : 1; } _has;
}

@property (nonatomic) BOOL hasModuleEventType;
@property (nonatomic) int moduleEventType;
@property (nonatomic) BOOL hasModuleLocation;
@property (nonatomic) int moduleLocation;
@property (nonatomic) BOOL hasModuleItemCount;
@property (nonatomic) int moduleItemCount;
@property (readonly, nonatomic) BOOL hasModuleExposureId;
@property (retain, nonatomic) NSData *moduleExposureId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;

- (id)moduleLocationAsString:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsModuleLocation:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (id)moduleEventTypeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsModuleEventType:(id)a0;

@end
