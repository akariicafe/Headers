@class NSString, BLTPBActionInformation;

@interface BLTPBHandleSnoozeActionRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) BOOL hasActionInfo;
@property (retain, nonatomic) BLTPBActionInformation *actionInfo;

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
