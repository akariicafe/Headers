@class NMSMediaSyncServiceKeepLocalOptions, NMSMediaSyncServiceModelObject;

@interface NMSMediaSyncServiceKeepLocalRequest : PBRequest <NSCopying> {
    struct { unsigned char enableState : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasModelObject;
@property (retain, nonatomic) NMSMediaSyncServiceModelObject *modelObject;
@property (nonatomic) BOOL hasEnableState;
@property (nonatomic) int enableState;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) NMSMediaSyncServiceKeepLocalOptions *options;

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
- (int)StringAsEnableState:(id)a0;
- (id)enableStateAsString:(int)a0;

@end
