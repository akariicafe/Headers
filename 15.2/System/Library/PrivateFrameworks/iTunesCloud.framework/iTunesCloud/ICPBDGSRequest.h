@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying> {
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
    struct { unsigned char uniqueID : 1; } _has;
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
