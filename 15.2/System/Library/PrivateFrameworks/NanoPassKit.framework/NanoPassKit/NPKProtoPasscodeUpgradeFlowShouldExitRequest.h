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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
