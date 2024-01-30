@class NSString, NSMutableArray;

@interface ACProtobufDataclassAction : PBCodable <NSCopying>

@property (nonatomic) int type;
@property (nonatomic) BOOL destructive;
@property (retain, nonatomic) NSMutableArray *affectedContainers;
@property (readonly, nonatomic) BOOL hasUndoAlertTitle;
@property (retain, nonatomic) NSString *undoAlertTitle;
@property (readonly, nonatomic) BOOL hasUndoAlertMessage;
@property (retain, nonatomic) NSString *undoAlertMessage;

+ (Class)affectedContainersType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (id)affectedContainersAtIndex:(unsigned long long)a0;
- (void)addAffectedContainers:(id)a0;
- (unsigned long long)affectedContainersCount;
- (void)clearAffectedContainers;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
