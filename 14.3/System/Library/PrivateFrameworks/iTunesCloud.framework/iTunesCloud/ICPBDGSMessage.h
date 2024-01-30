@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) ICPBDGSRequest *request;
@property (readonly, nonatomic) BOOL hasResponse;
@property (retain, nonatomic) ICPBDGSResponse *response;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
