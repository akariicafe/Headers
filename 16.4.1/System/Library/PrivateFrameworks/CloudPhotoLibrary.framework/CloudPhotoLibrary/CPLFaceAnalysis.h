@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; } _has;
}

@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSMutableArray *faceInstances;

+ (Class)faceInstancesType;

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
- (void)addFaceInstances:(id)a0;
- (void)clearFaceInstances;
- (id)faceInstancesAtIndex:(unsigned long long)a0;
- (unsigned long long)faceInstancesCount;

@end
