@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying> {
    struct { unsigned char date : 1; unsigned char feed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (retain, nonatomic) NSString *universalSectionID;
@property (readonly, nonatomic) BOOL hasPublisherMatchID;
@property (retain, nonatomic) NSString *publisherMatchID;
@property (nonatomic) BOOL hasFeed;
@property (nonatomic) unsigned int feed;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

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

@end
