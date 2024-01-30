@class NSString;

@interface BLTPBSetNotificationsGroupingRequest : PBRequest <NSCopying> {
    struct { unsigned char grouping : 1; } _has;
}

@property (nonatomic) BOOL hasGrouping;
@property (nonatomic) int grouping;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;

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
- (int)StringAsGrouping:(id)a0;
- (id)groupingAsString:(int)a0;

@end
