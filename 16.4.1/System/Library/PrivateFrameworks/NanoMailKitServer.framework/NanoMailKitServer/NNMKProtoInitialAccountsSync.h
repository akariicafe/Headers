@class NSString, NSMutableArray, NSData;

@interface NNMKProtoInitialAccountsSync : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *initialAccounts;
@property (readonly, nonatomic) BOOL hasInitialSyncVersion;
@property (retain, nonatomic) NSString *initialSyncVersion;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;

+ (Class)initialAccountType;

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
- (void)addInitialAccount:(id)a0;
- (void)clearInitialAccounts;
- (id)initialAccountAtIndex:(unsigned long long)a0;
- (unsigned long long)initialAccountsCount;

@end
