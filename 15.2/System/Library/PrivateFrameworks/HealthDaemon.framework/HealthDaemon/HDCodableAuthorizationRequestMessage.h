@class NSString, NSData;

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _typesToReads;
    struct { long long *list; unsigned long long count; unsigned long long size; } _typesToWrites;
}

@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier;
@property (readonly, nonatomic) unsigned long long typesToReadsCount;
@property (readonly, nonatomic) long long *typesToReads;
@property (readonly, nonatomic) unsigned long long typesToWritesCount;
@property (readonly, nonatomic) long long *typesToWrites;

+ (id)codableAuthorizationRequestWithRecord:(id)a0;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)decodedWriteTypes;
- (id)decodedReadTypes;
- (long long)typesToReadAtIndex:(unsigned long long)a0;
- (long long)typesToWriteAtIndex:(unsigned long long)a0;
- (void)addTypesToRead:(long long)a0;
- (void)addTypesToWrite:(long long)a0;
- (void)clearTypesToReads;
- (void)clearTypesToWrites;
- (void)setTypesToReads:(long long *)a0 count:(unsigned long long)a1;
- (void)setTypesToWrites:(long long *)a0 count:(unsigned long long)a1;

@end
