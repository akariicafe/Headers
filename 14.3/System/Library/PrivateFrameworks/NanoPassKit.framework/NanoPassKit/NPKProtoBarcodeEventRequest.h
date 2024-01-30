@class NSData, NSMutableArray;

@interface NPKProtoBarcodeEventRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestData;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) NSMutableArray *associatedApplicationIdentifiers;

+ (Class)associatedApplicationIdentifiersType;

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
- (void)addAssociatedApplicationIdentifiers:(id)a0;
- (unsigned long long)associatedApplicationIdentifiersCount;
- (void)clearAssociatedApplicationIdentifiers;
- (id)associatedApplicationIdentifiersAtIndex:(unsigned long long)a0;

@end
