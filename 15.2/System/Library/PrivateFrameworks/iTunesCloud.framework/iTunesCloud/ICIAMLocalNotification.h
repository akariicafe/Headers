@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char interval : 1; unsigned char trigger : 1; } _has;
}

@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) double interval;
@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) NSString *notification;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)triggerAsString:(int)a0;
- (int)StringAsTrigger:(id)a0;
- (id)dictionaryRepresentation;

@end
