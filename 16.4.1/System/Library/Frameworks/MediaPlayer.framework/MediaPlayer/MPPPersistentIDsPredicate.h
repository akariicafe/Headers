@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _persistentIDs;
    struct { unsigned char shouldContain : 1; } _has;
}

@property (nonatomic) BOOL hasShouldContain;
@property (nonatomic) BOOL shouldContain;
@property (readonly, nonatomic) unsigned long long persistentIDsCount;
@property (readonly, nonatomic) long long *persistentIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPersistentIDs:(long long)a0;
- (void)clearPersistentIDs;
- (long long)persistentIDsAtIndex:(unsigned long long)a0;
- (void)setPersistentIDs:(long long *)a0 count:(unsigned long long)a1;

@end
