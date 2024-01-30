@class NSString;

@interface NPKProtoPresentStandaloneTransactionRequest : PBRequest <NSCopying> {
    struct { unsigned char validUntilEpochTimeInterval : 1; unsigned char transactionType : 1; } _has;
}

@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (readonly, nonatomic) BOOL hasWatchPassUniqueID;
@property (retain, nonatomic) NSString *watchPassUniqueID;
@property (nonatomic) BOOL hasValidUntilEpochTimeInterval;
@property (nonatomic) double validUntilEpochTimeInterval;

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
