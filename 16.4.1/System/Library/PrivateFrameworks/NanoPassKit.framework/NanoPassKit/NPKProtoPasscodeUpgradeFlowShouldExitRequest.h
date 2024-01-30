@class NSData;

@interface NPKProtoPasscodeUpgradeFlowShouldExitRequest : PBRequest <NSCopying> {
    struct { unsigned char passcodeChanged : 1; unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPasscodeChanged;
@property (nonatomic) BOOL passcodeChanged;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
