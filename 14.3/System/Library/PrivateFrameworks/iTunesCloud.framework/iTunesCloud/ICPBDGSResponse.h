@class ICPBDGSStartDelegationResponse, ICPBDGSFinishDelegationResponse;

@interface ICPBDGSResponse : PBCodable <NSCopying> {
    struct { unsigned char requestUniqueID : 1; } _has;
}

@property (nonatomic) BOOL hasRequestUniqueID;
@property (nonatomic) unsigned int requestUniqueID;
@property (readonly, nonatomic) BOOL hasStartDelegationResponse;
@property (retain, nonatomic) ICPBDGSStartDelegationResponse *startDelegationResponse;
@property (readonly, nonatomic) BOOL hasFinishDelegationResponse;
@property (retain, nonatomic) ICPBDGSFinishDelegationResponse *finishDelegationResponse;

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
