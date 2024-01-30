@class NSString;

@interface ATXMPBInstalledAppClipSessionEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; unsigned char numSuggestionsShown : 1; } _has;
}

@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (nonatomic) BOOL hasNumSuggestionsShown;
@property (nonatomic) unsigned int numSuggestionsShown;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;

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
- (id)engagementTypeAsString:(int)a0;
- (int)StringAsEngagementType:(id)a0;

@end
