@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _persistentIDs;
    struct { unsigned char shouldContain : 1; } _has;
}

@property (nonatomic) BOOL hasShouldContain;
@property (nonatomic) BOOL shouldContain;
@property (readonly, nonatomic) unsigned long long persistentIDsCount;
@property (readonly, nonatomic) long long *persistentIDs;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)clearPersistentIDs;
- (void)addPersistentIDs:(long long)a0;
- (long long)persistentIDsAtIndex:(unsigned long long)a0;
- (void)setPersistentIDs:(long long *)a0 count:(unsigned long long)a1;

@end
