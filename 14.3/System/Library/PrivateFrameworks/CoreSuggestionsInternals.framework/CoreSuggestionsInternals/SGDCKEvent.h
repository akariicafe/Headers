@class NSString, SGDCKTimeRange, NSData, NSMutableArray, SGDCKInteractionInfo;

@interface SGDCKEvent : PBCodable <NSCopying> {
    struct { unsigned char creationTimestamp : 1; unsigned char lastModifiedTimestamp : 1; unsigned char parentEntityType : 1; unsigned char categoryType : 1; unsigned char allDay : 1; unsigned char cancelled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) NSString *groupId;
@property (readonly, nonatomic) BOOL hasSourceKey;
@property (retain, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasCreationTimestamp;
@property (nonatomic) double creationTimestamp;
@property (nonatomic) BOOL hasLastModifiedTimestamp;
@property (nonatomic) double lastModifiedTimestamp;
@property (readonly, nonatomic) BOOL hasWhen;
@property (retain, nonatomic) SGDCKTimeRange *when;
@property (nonatomic) BOOL hasAllDay;
@property (nonatomic) BOOL allDay;
@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) BOOL hasExtraKey;
@property (retain, nonatomic) NSString *extraKey;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL cancelled;
@property (readonly, nonatomic) BOOL hasSchemaOrg;
@property (retain, nonatomic) NSData *schemaOrg;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasTemplateName;
@property (retain, nonatomic) NSString *templateName;
@property (nonatomic) BOOL hasCategoryType;
@property (nonatomic) int categoryType;
@property (readonly, nonatomic) BOOL hasInteractionInfo;
@property (retain, nonatomic) SGDCKInteractionInfo *interactionInfo;
@property (nonatomic) BOOL hasParentEntityType;
@property (nonatomic) long long parentEntityType;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;

+ (Class)locationsType;

- (void)clearLocations;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addLocations:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)locationsCount;
- (id)locationsAtIndex:(unsigned long long)a0;
- (id)categoryTypeAsString:(int)a0;
- (int)StringAsCategoryType:(id)a0;

@end
