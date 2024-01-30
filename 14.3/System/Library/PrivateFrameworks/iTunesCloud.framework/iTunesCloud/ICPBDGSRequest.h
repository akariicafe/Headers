@class ICPBDGSStartDelegationRequest, ICPBDGSFinishDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying> {
    struct { unsigned char uniqueID : 1; } _has;
}

@property (nonatomic) BOOL hasUniqueID;
@property (nonatomic) unsigned int uniqueID;
@property (readonly, nonatomic) BOOL hasStartDelegationRequest;
@property (retain, nonatomic) ICPBDGSStartDelegationRequest *startDelegationRequest;
@property (readonly, nonatomic) BOOL hasFinishDelegationRequest;
@property (retain, nonatomic) ICPBDGSFinishDelegationRequest *finishDelegationRequest;

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
