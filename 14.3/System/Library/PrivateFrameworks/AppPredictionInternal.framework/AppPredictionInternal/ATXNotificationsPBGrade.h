@class NSString;

@interface ATXNotificationsPBGrade : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRating;
@property (retain, nonatomic) NSString *rating;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;

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
