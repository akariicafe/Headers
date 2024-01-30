@class TPPBAncientEpoch, TPPBPolicyProhibits, TPPBDispositionDisallowedMachineID, TPPBUnknownMachineID, TPPBDispositionDuplicateMachineID;

@interface TPPBDisposition : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAncientEpoch;
@property (retain, nonatomic) TPPBAncientEpoch *ancientEpoch;
@property (readonly, nonatomic) BOOL hasPolicyProhibits;
@property (retain, nonatomic) TPPBPolicyProhibits *policyProhibits;
@property (readonly, nonatomic) BOOL hasUnknownMachineID;
@property (retain, nonatomic) TPPBUnknownMachineID *unknownMachineID;
@property (readonly, nonatomic) BOOL hasDuplicateMachineID;
@property (retain, nonatomic) TPPBDispositionDuplicateMachineID *duplicateMachineID;
@property (readonly, nonatomic) BOOL hasDisallowedMachineID;
@property (retain, nonatomic) TPPBDispositionDisallowedMachineID *disallowedMachineID;

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
