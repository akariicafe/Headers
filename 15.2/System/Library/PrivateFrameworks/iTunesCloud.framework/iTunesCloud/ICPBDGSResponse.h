@class ICPBDGSStartDelegationResponse, ICPBDGSFinishDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying> {
    ICPBDGSFinishDelegationResponse *_finishDelegationResponse;
    unsigned int _requestUniqueID;
    ICPBDGSStartDelegationResponse *_startDelegationResponse;
    struct { unsigned char requestUniqueID : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
