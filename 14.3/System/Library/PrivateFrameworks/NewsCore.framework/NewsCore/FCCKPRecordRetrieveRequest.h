@class FCCKPRequestedFields, FCCKPRecordIdentifier, NSString;

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) FCCKPRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) FCCKPRequestedFields *requestedFields;
@property (readonly, nonatomic) BOOL hasVersionETag;
@property (retain, nonatomic) NSString *versionETag;
@property (readonly, nonatomic) BOOL hasClientVersionETag;
@property (retain, nonatomic) NSString *clientVersionETag;

+ (id)options;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
