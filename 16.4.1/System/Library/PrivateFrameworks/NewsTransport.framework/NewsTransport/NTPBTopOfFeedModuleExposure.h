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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsModuleLocation:(id)a0;
- (int)StringAsModuleEventType:(id)a0;
- (id)moduleEventTypeAsString:(int)a0;
- (id)moduleLocationAsString:(int)a0;

@end
