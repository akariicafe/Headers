@class NSString, NSMutableArray;

@interface ICIAMApplicationMessageSyncResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSMutableArray *syncCommands;

+ (Class)syncCommandsType;

- (void)addSyncCommands:(id)a0;
- (void)clearSyncCommands;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)syncCommandsCount;
- (id)syncCommandsAtIndex:(unsigned long long)a0;

@end
