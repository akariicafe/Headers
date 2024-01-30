@class HDCodableMedicalIDData, NSMutableArray;

@interface HDCloudSyncCodableMedicalID : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMedicalIDData;
@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSMutableArray *medicalIDLogs;

+ (Class)medicalIDLogsType;

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
- (void)addMedicalIDLogs:(id)a0;
- (unsigned long long)medicalIDLogsCount;
- (void)clearMedicalIDLogs;
- (id)medicalIDLogsAtIndex:(unsigned long long)a0;

@end
