@class NSString;

@interface ATXPBAppDirectoryEvent : PBCodable <NSCopying> {
    struct { unsigned char bundleIndex : 1; unsigned char categoryID : 1; unsigned char categoryIndex : 1; unsigned char date : 1; unsigned char eventType : 1; unsigned char searchQueryLength : 1; unsigned char searchTab : 1; } _has;
}

@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic) BOOL hasCategoryID;
@property (nonatomic) unsigned long long categoryID;
@property (nonatomic) BOOL hasCategoryIndex;
@property (nonatomic) unsigned long long categoryIndex;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleIndex;
@property (nonatomic) unsigned long long bundleIndex;
@property (nonatomic) BOOL hasSearchQueryLength;
@property (nonatomic) unsigned long long searchQueryLength;
@property (nonatomic) BOOL hasSearchTab;
@property (nonatomic) unsigned long long searchTab;

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
