@class NSString;

@interface WFPBAutomatorWorkflowMigrationEvent : PBCodable <NSCopying> {
    struct { unsigned char automatorActionCount : 1; unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasAutomatorActionCount;
@property (nonatomic) unsigned int automatorActionCount;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;

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
